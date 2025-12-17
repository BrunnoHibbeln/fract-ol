/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:04:51 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:13 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_print_char((int)*str);
		count++;
		str++;
	}
	return (count);
}