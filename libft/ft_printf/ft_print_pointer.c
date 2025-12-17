/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 08:53:08 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:17 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer_value(unsigned long long ptr)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (ptr < 16)
		return (ft_print_char(symbols[ptr]));
	else
	{
		count = ft_print_pointer_value(ptr / 16);
		return (count + ft_print_pointer_value(ptr % 16));
	}
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_print_pointer_value(ptr);
	return (count);
}