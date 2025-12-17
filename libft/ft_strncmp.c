/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:29:32 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 17:38:34 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int	main(void)
{
	int result = ft_strncmp("test\200", "test\0", 6);
	printf("result: %d\n",result);
	result = strncmp("test\200", "test\0", 6);
	printf("strncmp: %d\n",result);
} */
