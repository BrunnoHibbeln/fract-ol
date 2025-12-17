# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 14:35:25 by bhibbeln          #+#    #+#              #
#    Updated: 2025/12/17 12:48:40 by bhibbeln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = gcc
CFLAGS = -Wall -Wextra -I ./libft -I$(MLX_DIR)
LIBFT = ./libft/libft.a

MLX_DIR = ./minilibx-linux

SRC = main.c  init.c render.c math_utils.c events.c
OBJ = $(SRC:.c=.o)

LINKS = -I$(MLX_DIR) -L$(MLX_DIR) -lmlx_Linux -lXext -lX11 -lm -lz

all: $(NAME)

$(LIBFT):
	@make -C ./libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LINKS) $(LIBFT) -o $(NAME)

clean:
	@make -C ./libft clean
	rm -f $(OBJ)

fclean: clean
	@make -C ./libft fclean
	rm -f $(NAME)

re: fclean all