/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:26:17 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 18:52:24 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	max;

	i = 0;
	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (start >= max)
		return ((char *)ft_strdup(""));
	if (len > max - start)
		len = max - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start] && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
/* 
int	main(void)
{
	printf("%s", ft_substr("asudhSTRINGikjahsdui", 5, 6));
} */
