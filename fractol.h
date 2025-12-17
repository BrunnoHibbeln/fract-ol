/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:17:21 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/17 14:11:42 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "./libft/libft.h"
# include <math.h>
# include "./minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>

# define ERROR_MESSAGE "\tTry:\n./fractol mandelbrot \n\tor \n./fractol julia <value1> <value2>\n"

# define WIDTH 800
# define HEIGHT 800

//Colors
#define BLACK			0x000000
#define WHITE			0xFFFFFF
#define GREEN			0x00FF00 
#define BLUE			0x0000FF 
#define MAGENTA			0xFF00FF 
#define LIME			0xCCFF00 
#define ORANGE			0xFF6600
#define PURPLE			0x9932CC 
#define AQUA			0x33CCCC
#define PINK			0xFF66B2
#define ELECTRIC		0x0066FF
#define LIGHTENING		0x00CCFF
#define LAVA			0xFF3300
#define YELLOW			0xFFFF00 
#define PASTELYELLOW	0xFFFF99
#define	PASTELPINK		0xFFB6C1

// Complex values
typedef struct s_complex
{
	// real number
	double	r;
	// imaginary number (i)
	double	i;
}	t_complex;

// Image
// This is the pixels buffer
typedef struct s_img
{
	void	*img_ptr; // pointer to image struct
	char	*pixels_ptr; // points to the actual pixels
	int		bits_per_pixel;
	int		endian;
	int		line_len;
}	t_img;

// Fractal
// mlx functions, image and hooks values
typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection; // mlx_init()
	void	*mlx_window; // mlx_new_window()
	t_img	*img;

	double	escape_value;
	int		iterations;
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
	//HOOKS
}	t_fractal;

//Data struct to scale a map
typedef struct s_map_coords
{
	double		unscaled_num;
	double		new_min;
	double		new_max;
	double		old_min;
	double		old_max;
}	t_map_coords;

// init
void	fractal_init(t_fractal *fractal);

// render
void	fractal_render(t_fractal *fractal);

// events
int	key_handler(int keysym, t_fractal *fractal);
int	mouse_handler(int button, int x, int y, t_fractal *fractal);
int	close_handler(t_fractal *fractal);

// math
double map(t_map_coords coords);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	square_complex(t_complex z);

double	atod(char *s);

#endif