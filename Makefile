# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 14:35:25 by bhibbeln          #+#    #+#              #
#    Updated: 2025/12/18 11:04:34 by bhibbeln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3 -I ./libft -I$(MLX_DIR)
LIBFT = ./libft/libft.a
MLX_DIR = ./minilibx-linux
MLX_LIB = $(MLX_DIR)/libmlx_Linux.a
SRC = main.c init.c render.c math_utils.c events.c
OBJ = $(SRC:.c=.o)
LINKS = -I$(MLX_DIR) -L$(MLX_DIR) -lmlx_Linux -lXext -lX11 -lm -lz

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
RESET=\033[0m

all: $(MLX_LIB) $(NAME)

MAKEFLAGS += -s

$(MLX_LIB):
	make -C $(MLX_DIR)

$(LIBFT):
	make -C ./libft

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LINKS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)✅ fractol compiled$(RESET)"

clean:
	make -C ./libft clean
	rm -f $(OBJ)
	@echo "$(RED)❌ Object files deleted$(RESET)"

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)
	@echo "$(RED)❌ fractol deleted$(RESET)"

re: fclean all
	@echo "$(YELLOW)🟡 Everything recompiled$(RESET)"