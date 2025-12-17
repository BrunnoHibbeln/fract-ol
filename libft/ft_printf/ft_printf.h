/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:05:22 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 11:49:09 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "../libft.h"

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_digit(long n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_pointer(unsigned long long n);
int	ft_print_hex(unsigned int n, char specifier);

#endif
