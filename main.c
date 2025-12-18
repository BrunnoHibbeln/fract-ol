/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:39:24 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/18 14:27:00 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_help(void)
{
	ft_putstr_fd("\n+==================================================+\n", 1);
	ft_putstr_fd("|                     FRACT-OL                     |\n", 1);
	ft_putstr_fd("+==================================================+\n", 1);
	ft_putstr_fd("|  Usage: ./fractol <name>                         |\n", 1);
	ft_putstr_fd("|                                                  |\n", 1);
	ft_putstr_fd("|  Available Fractals:                             |\n", 1);
	ft_putstr_fd("|   * mandelbrot                                   |\n", 1);
	ft_putstr_fd("|   * julia <real> <imaginary>                     |\n", 1);
	ft_putstr_fd("|                                                  |\n", 1);
	ft_putstr_fd("|  Controls:                                       |\n", 1);
	ft_putstr_fd("|   [WASD]           Move view                     |\n", 1);
	ft_putstr_fd("|   [Scroll]         Zoom in/out                   |\n", 1);
	ft_putstr_fd("|   [Arrow Up/Down]  Change iterations             |\n", 1);
	ft_putstr_fd("|   [Mouse]          Shift Julia set (Left Click)  |\n", 1);
	ft_putstr_fd("|   [ESC]            Close program                 |\n", 1);
	ft_putstr_fd("+==================================================+\n\n", 1);
	exit(EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	t_fractal	fractal;

	if (((ac == 2) && !ft_strncmp(av[1], "mandelbrot", 10)
			&& ft_strlen(av[1]) == 10)
		|| ((ac == 4) && !ft_strncmp(av[1], "julia", 5)
			&& ft_strlen(av[1]) == 5))
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
		print_help();
}
