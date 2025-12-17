/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:17:12 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 18:27:02 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && i + j < len
			&& big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/* {
	char	*b;
	char	*l;
	size_t	i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if ((*big == *little) && (i < len))
		{
			b = big;
			l = little;
			while ((*b == *l) && (*b) && (*l) && (i++ < len))
			{
				b++;
				l++;
			}
			if (!*l)
				return ((char *)big);
		}
		i++;
		big++;
	}
	return (NULL);
} */
/* 
int	main(void)
{
	char big[30] = "aaabcabcd";
	char little[10] = "abcd";
	int len = 9;

	char *f = ft_strnstr(big, little, 9) == big + 5;
	char *p = ft_strnstr(big, little, len);
	printf("ft_strnstr: %s\n",p);
	printf("ft_strnstr2: %s\n",f);
} */
