/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:13:53 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:27:45 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	is_odd;
	int	num;

	num = 0;
	is_odd = 0;
	while ((*nptr == 32) || ((*nptr > 8) && (*nptr < 14)))
		nptr++;
	if ((*nptr == 43) || (*nptr == 45))
	{
		if (*nptr == 45)
			is_odd++;
		nptr++;
	}
	while (*nptr > 47 && *nptr < 58)
	{
		num *= 10;
		num += *nptr - 48;
		nptr++;
	}
	if ((is_odd % 2) != 0)
		return (-(num));
	return (num);
}
/* 
int	main(void)
{
	char nptr[] = " -79aaaa69";
	printf("atoi: %d\n",atoi(nptr));
	printf("ft_atoi: %d\n",ft_atoi(nptr));
} */