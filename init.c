/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 09:13:10 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/17 16:14:14 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	malloc_error(void)
{
	perror("Malloc Error!!!!!");
	exit(EXIT_FAILURE);
}

static void	data_init(t_fractal *fractal)
{
	fractal->escape_value = 4;
	fractal->iterations = 252;
	fractal->shift_x = 0.0;
	fractal->shift_y = 0.0;
	fractal->zoom = 1.0;
}

static void	events_init(t_fractal *fractal)
{
	mlx_hook(fractal->mlx_window, KeyPress, 
			KeyPressMask, (int (*)(void))key_handler, fractal);
	mlx_hook(fractal->mlx_window, ButtonPress, 
			ButtonPressMask, (int (*)(void))mouse_handler, fractal);
	mlx_hook(fractal->mlx_window, DestroyNotify, 
			StructureNotifyMask, (int (*)(void))close_handler, fractal);
}

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();
	if (fractal->mlx_connection == NULL)
		malloc_error();
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection, 
									WIDTH, HEIGHT, fractal->name);
	if (fractal->mlx_window == NULL)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img = malloc(sizeof(t_img)); 
	if (!fractal->img) // fix probably leak
	{
		free(fractal->img);
    	malloc_error();
	}
	fractal->img->img_ptr = mlx_new_image(fractal->mlx_connection, 
													WIDTH, HEIGHT);
	if (fractal->img->img_ptr == NULL)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		free(fractal->img);
		malloc_error();
	}
	fractal->img->pixels_ptr = mlx_get_data_addr(fractal->img->img_ptr,
												&fractal->img->bits_per_pixel,
												&fractal->img->line_len,
												&fractal->img->endian);
	events_init(fractal);
	data_init(fractal);
}
