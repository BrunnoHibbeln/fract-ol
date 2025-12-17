/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:46:31 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:34:53 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*us;
	size_t			i;

	i = 0;
	us = (unsigned char *)s;
	while (i < n)
		us[i++] = 0;
}

// int main(void)
// {
// 	char buffer[20] = "Hello, World!";
// 	int i;

// 	printf("Before ft_bzero: %s\n", buffer);

// 	// Call ft_bzero on part of the buffer
// 	ft_bzero(buffer + 7, 6);

// 	printf("After ft_bzero: ");
// 	for (i = 0; i < 20; i++)
// 	{
// 		if (buffer[i] == 0)
// 			printf("\\0");
// 		else
// 			printf("%c", buffer[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }
