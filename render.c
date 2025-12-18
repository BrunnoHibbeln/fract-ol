/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 09:49:58 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/18 13:18:15 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_pixel_put(int x, int y, t_img *img, int color)
{
	int	offset;

	offset = (y * img->line_len) + (x * (img->bits_per_pixel / 8));
	*(unsigned int *)(img->pixels_ptr + offset) = color;
}

static void	choose_set(t_complex *z, t_complex *c, t_fractal *fractal)
{
	if (!ft_strncmp(fractal->name, "julia", 5))
	{
		z->r = c->r;
		z->i = c->i;
		c->r = fractal->julia_x;
		c->i = fractal->julia_y;
	}
	else
	{
		z->r = 0.0;
		z->i = 0.0;
	}
}

static int	get_color(int i, t_fractal *fractal)
{
	double	t;
	int		r;
	int		g;
	int		b;

	t = (double)i / fractal->iterations;
	r = (int)(9 * (1 - t) * t * t * t * 255);
	g = (int)(15 * (1 - t) * (1 - t) * t * t * 255);
	b = (int)(8.5 * (1 - t) * (1 - t) * (1 - t) * t * 255);
	return ((r << 16) | (g << 8) | b);
}

// Fixed parameter order: (x, y) instead of (y, x)
static void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;
	double		value;
	int			i;

	i = -1;
	c.r = (map((t_map_coords){x, -2, +2, 0, WIDTH})
			* fractal->zoom) + fractal->shift_x;
	c.i = (map((t_map_coords){y, +2, -2, 0, HEIGHT})
			* fractal->zoom) + fractal->shift_y;
	choose_set(&z, &c, fractal);
	while (++i < fractal->iterations)
	{
		z = sum_complex(square_complex(z), c);
		value = (z.r * z.r) + (z.i * z.i);
		if (value > fractal->escape_value)
		{
			ft_pixel_put(x, y, fractal->img, get_color(i, fractal));
			return ;
		}
	}
	ft_pixel_put(x, y, fractal->img, WHITE);
}

void	fractal_render(t_fractal *fractal)
{
	int	y;
	int	x;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			handle_pixel(x, y, fractal);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(fractal->mlx_connection, fractal->mlx_window,
		fractal->img->img_ptr, 0, 0);
}
