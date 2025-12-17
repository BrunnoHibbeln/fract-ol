/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:28:30 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 19:25:50 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     memcpy(dest, src, strlen(src) + 1); // +1 for null terminator
//     printf("src: %s\n", src);
//     printf("dest: %s\n", dest); // Output: "Hello, World!"

//     return 0;
// }
