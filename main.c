/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:39:24 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/17 14:35:48 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	t_fractal	fractal;
	if (((ac == 2) && !ft_strncmp(av[1], "mandelbrot", 10))
		|| ((ac == 4) && !ft_strncmp(av[1], "julia", 5)))
	{
		// define the name of the fractal
		fractal.name = av[1];
		if (ac == 4)
		{
			fractal.julia_x = atod(av[2]);
			fractal.julia_y = atod(av[3]);
		}
		// init the fractal
		fractal_init(&fractal);
		// after fractal init, render it
		fractal_render(&fractal);
		// and start the mlx loop with it
		mlx_loop(fractal.mlx_connection);
	}
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	
}
