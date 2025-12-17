/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:13:35 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/11 09:37:18 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length])
		length++;
	return (length + 1);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s_copy;

	i = 0;
	s_copy = (char *)malloc(sizeof(char) * getlen(s));
	if (!s_copy)
		return (NULL);
	while (s[i])
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
/* 
int	main(void)
{
	char s[] = "aaaaaaaaa";
	char *result = ft_strdup(s);
	printf("%s", result);
} */
