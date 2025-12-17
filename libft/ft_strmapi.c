/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:29:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:42:22 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
static char	ft_sub_ascii(unsigned int n, char c)
{
	return (c - 1);
}
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*p;
	int		i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	p = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	printf("%s",ft_strmapi("Efv!dfsup", &ft_sub_ascii));
// }