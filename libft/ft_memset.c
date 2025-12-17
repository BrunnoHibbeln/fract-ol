/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:08:59 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:35:28 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*us;
	size_t			i;

	i = 0;
	us = (unsigned char *)s;
	while (i < n)
		us[i++] = c;
	return (s);
}
/* 
int	main(void)
{
	char buffer[5];

	// Fill buffer with 'A' (ASCII 65) using your function
	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[4] = '\0';  // Null-terminate the string

	printf("Custom memset result: %s\n", buffer);

	// Optional: Compare with standard memset
	char std_buffer[5];
	memset(std_buffer, 'A', sizeof(std_buffer) - 1);
	std_buffer[4] = '\0';

	printf("Standard memset result: %s\n", std_buffer);

	return 0;
} */
