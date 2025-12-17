/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 09:49:58 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/17 15:58:11 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/* 
	Mandelbrot
	{
		z = z^2 + c
		z initially is (0, 0)
		c is the actual point
		
		z = (z^2 + c) --> z1 = c + c
	}
	Julia
	{
		./fractol julia <real> <i>
		z = pixel_point + constant
	}
*/

static void	ft_pixel_put(int x, int y, t_img *img, int color)
{
	int	offset;

	offset = (y * img->line_len) + (x * (img->bits_per_pixel / 8));
	*(unsigned int *)(img->pixels_ptr + offset) = color;
}

// render.c

static void choose_set(t_complex *z, t_complex *c, t_fractal *fractal)
{
    if (!ft_strncmp(fractal->name, "julia", 5))
    {
        // JULIA LOGIC:
        // 1. Z becomes the current pixel position (which is currently stored in C)
        z->r = c->r;
        z->i = c->i;
        
        // 2. C becomes the constant constant (from arguments)
        c->r = fractal->julia_x;
        c->i = fractal->julia_y;
    }
    else
    {
        // MANDELBROT LOGIC:
        // 1. C stays as the pixel position (already set in handle_pixel)
        
        // 2. Z always starts at 0,0
        z->r = 0.0;
        z->i = 0.0;
    }
}

// Fixed parameter order: (x, y) instead of (y, x)
static void	handle_pixel(int x, int y, t_fractal *fractal)
{
    t_complex	z;
    t_complex	c;
    double		value;
    int			i;
    int			color;

    // Initialize these!
    i = 0;
    
    // 1. Calculate the complex number for the CURRENT PIXEL
    // Note: We use 'x' with WIDTH and 'y' with HEIGHT
    c.r = (map((t_map_coords){x, -2, +2, 0, WIDTH}) 
                * fractal->zoom) + fractal->shift_x;
    c.i = (map((t_map_coords){y, +2, -2, 0, HEIGHT}) 
                * fractal->zoom) + fractal->shift_y;

    // 2. Adjust Z and C based on which fractal we are drawing
    choose_set(&z, &c, fractal);

    // 3. The Math Loop
    while (i < fractal->iterations)
    {
        z = sum_complex(square_complex(z), c);
        
        value = (z.r * z.r) + (z.i * z.i);
        if (value > fractal->escape_value)
        {
            color = map((t_map_coords){i, BLACK, WHITE, 0, fractal->iterations});
            ft_pixel_put(x, y, fractal->img, color);
            return ;
        }
        i++;
    }
    // Pixels inside the set are usually Black, not White, but this is up to you
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