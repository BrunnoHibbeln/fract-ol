/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:39:24 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/18 12:02:41 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	t_fractal	fractal;

	if (((ac == 2) && !ft_strncmp(av[1], "mandelbrot", 10))
		|| ((ac == 4) && !ft_strncmp(av[1], "julia", 5)))
	{
		fractal.name = av[1];
		if (ac == 4)
		{
			fractal.julia_x = atod(av[2]);
			fractal.julia_y = atod(av[3]);
		}
		fractal_init(&fractal);
		fractal_render(&fractal);
		mlx_loop(fractal.mlx_connection);
	}
	else
	{
		ft_putstr_fd("Try: ./fractol mandelbrot \nor \n", STDERR_FILENO);
		ft_putstr_fd("Try: ./fractol julia <value1> <value2>\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
