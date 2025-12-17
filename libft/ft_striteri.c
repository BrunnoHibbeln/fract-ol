/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:56:25 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:38:25 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
static int	upper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	else
		return (c);
}

static void	ft_change_ascii(unsigned int i, char *c)
{
	if ((i % 2) == 0)
		*c = upper(*c);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char p[] = "uma string";
// 	ft_striteri(p, &ft_change_ascii);
// 	printf("%s", p);
// }
