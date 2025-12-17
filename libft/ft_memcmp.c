/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:39:01 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/15 14:05:12 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1;
	const unsigned char	*us2;
	size_t				i;

	i = 0;
	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (us1[i] == us2[i])
			i++;
		else
		{
			if (us1[i] > us2[i])
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "World";

//     printf("%s = %s ? result: %d\n", str1, str2, ft_memcmp(str1, str2, 5));
//     printf("%s = %s ? result: %d\n", str1, str3, ft_memcmp(str1, str3, 5));
//     printf("%s = %s ? result: %d\n", str3, str1, ft_memcmp(str3, str1, 5));

//     return (0);
// }
