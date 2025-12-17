/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:58:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/09 13:27:41 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*p;
	unsigned char	*up;
	size_t			total;
	size_t			i;

	total = nmemb * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	up = (unsigned char *)p;
	i = 0;
	while (i < total)
		up[i++] = 0;
	return (p);
}

// int	main(void)
// {
// 	size_t nmemb = 5;
// 	char *p = ft_calloc(nmemb, sizeof(char));

// 	int i = 0;
// 	while (i < nmemb)
// 	{
// 		if (!p[i])
// 			printf("'\\0'");
// 		else
// 			printf("%f", p[i]);
// 		i++;
// 	}
// 	return (0);
// }
