/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:36:37 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 15:53:51 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/* 
int	main(void)
{
	char	dst[] = "aaaaaaa";
	char	src[] = "bbbbb";
	size_t	size = 3;
	
	printf("dst: %d", ft_strlcpy(dst, src, size));
} */
