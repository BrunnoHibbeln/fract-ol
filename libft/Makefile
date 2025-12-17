# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 12:41:48 by bhibbeln          #+#    #+#              #
#    Updated: 2025/12/16 16:58:54 by bhibbeln         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 

BONUS_SRC = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

FT_PRINTF_SRC = ft_printf/ft_printf.c \
	ft_printf/ft_print_char.c \
	ft_printf/ft_print_digit.c \
	ft_printf/ft_print_hex.c \
	ft_printf/ft_print_pointer.c \
	ft_printf/ft_print_str.c \
	ft_printf/ft_print_unsigned.c 

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)
FT_PRINTF_OBJS = $(FT_PRINTF_SRC:.c=.o)

MAKEFLAGS += -s

$(NAME): $(OBJS) $(FT_PRINTF_OBJS)
	ar rcs $(NAME) $(OBJS) $(FT_PRINTF_OBJS)

all: $(NAME)

bonus: $(NAME) bonusRun
	
bonusRun: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
	@touch bonusRun

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(FT_PRINTF_OBJS) bonusRun

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus