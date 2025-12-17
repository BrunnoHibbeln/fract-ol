/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:11:59 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:25 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long n)
{
	int		count;
	char	*num;

	count = 0;
	num = ft_itoa(n);
	count = ft_print_str(num);
	free(num);
	return (count);
}
