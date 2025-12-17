/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:04:31 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/17 14:03:14 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

// ESC pressed or the X on the window
int	close_handler(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx_connection, fractal->img->img_ptr);
	mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
	mlx_destroy_display(fractal->mlx_connection);
	free(fractal->mlx_connection);
	free(fractal->img);
	exit(EXIT_SUCCESS);
}

// Keypress prototype
// int (*f)(int keycode, t_fractal *fractal)
int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == XK_Escape)
		close_handler(fractal);
	if (keysym == XK_Left)
		fractal->shift_x -= (0.5 * fractal->zoom);
	else if (keysym == XK_Right)
		fractal->shift_x += (0.5 * fractal->zoom);
	else if (keysym == XK_Up)
		fractal->shift_y += (0.5 * fractal->zoom);
	else if (keysym == XK_Down)
		fractal->shift_y -= (0.5 * fractal->zoom);
	else if (keysym == XK_equal) // cheking for equal sign =
		fractal->iterations += 10;
	else if (keysym == XK_minus) // cheking for minus sign -
		fractal->iterations -= 10;
	// refresh the image
	fractal_render(fractal);
	return (0);
}

// int (*f)(int button, int x, int y, void *param)
int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	// Zoom-in
	if (button == Button4)
	{
		fractal->zoom *= 0.95;
	}
	// Zoom-out
	else if (button == Button5)
	{
		fractal->zoom *= 1.05;
	}
	fractal_render(fractal);
	return (0);
}