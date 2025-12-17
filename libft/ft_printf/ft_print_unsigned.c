/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 08:30:31 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/12/16 12:51:08 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_utoa(unsigned int n)
{
	char	*num;
	int		len;

	len = count_digits(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (len--)
	{
		num[len] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	int		count;
	char	*num;

	count = 0;
	num = ft_utoa(n);
	count = ft_print_str(num);
	free(num);
	return (count);
}