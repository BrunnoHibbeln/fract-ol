/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:34:33 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 19:29:19 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *str, int end)
{
	char	temp;
	int		start;

	start = 0;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static int	ft_count_digits(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static void	ft_convert(char *p, long nb, int is_negative)
{
	int	i;

	i = 0;
	if (nb == 0)
		p[i++] = '0';
	while (nb > 0)
	{
		p[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (is_negative)
		p[i++] = '-';
	p[i] = '\0';
	ft_reverse(p, i - 1);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*p;
	int		is_negative;

	nb = (long)n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = -nb;
		is_negative = 1;
	}
	p = (char *)malloc((ft_count_digits(nb) + 1 + is_negative) * sizeof(char));
	if (!p)
		return (NULL);
	ft_convert(p, nb, is_negative);
	return (p);
}
/* 
int	main(void)
{
	printf("number: %s\n", ft_itoa(-1982371));
} */
