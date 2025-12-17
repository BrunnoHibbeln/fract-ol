/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:44:32 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 17:37:24 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*first;

	first = NULL;
	while (*s)
	{
		if (*s == (char)c)
			return (first = (char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (first);
}
/* 
int main(void)
{
	const char  s[] = "kaujsdjhabs";
	int c = 'd';
	char *res1 = ft_strchr(s, c);
	char *res2 = strchr(s, c);
	printf("%s\n", res1);
	printf("%s\n", res2);
	return (0);
} */
