/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:04:00 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:21 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char specifier)
{
	int		count;
	char	*symbols;

	if (specifier == 'x')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (n < 16)
		return (ft_print_char(symbols[n]));
	else
	{
		count = ft_print_hex(n / 16, specifier);
		return (count + ft_print_hex(n % 16, specifier));
	}
}