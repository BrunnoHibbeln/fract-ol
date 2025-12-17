/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:37:07 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 17:38:30 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}
/* 
int	main(void)
{
	const char s[] = "asudasvv";
	char c = '\0';

	char *p = ft_strrchr(s, c);
	if (*p == '\0')
		printf("null terminator '\\0'");
	else
		printf("%s", p);
} */
