/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:14:34 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 19:26:27 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char test1[20] = "Hello, World!";
// 	char test2[20] = "Hello, World!";

// 	// Case 1: No overlap
// 	printf("Before (no overlap): %s\n", test1);
// 	ft_memmove(test1 + 7, test1, 5); // Move "Hello" to position 7
// 	printf("After  (no overlap): %s\n", test1);

// 	// Reset test2
// 	strcpy(test2, "123456789");

// 	// Case 2: Overlapping memory (dest > src)
// 	printf("\nBefore (overlap):    %s\n", test2);
// 	ft_memmove(test2 + 2, test2, 5); // Move "12345" to position 2
// 	printf("After  (overlap):    %s\n", test2);

// 	return 0;
// }
