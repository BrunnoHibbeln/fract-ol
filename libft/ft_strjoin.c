/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:44:18 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/14 14:44:18 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(char const *s1, char const *s2)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (s1[i])
	{
		i++;
		length++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		length++;
	}
	return (length + 1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = (char *)malloc(sizeof(char) * get_size(s1, s2));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char *p = ft_strjoin("Hello ", "World");
// 	printf("%s", p);
// }