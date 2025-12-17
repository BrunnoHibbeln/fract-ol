/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:04:04 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/11 09:10:23 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c - 32);
	else
		return (c);
}
/* 
int	main(void)
{
	char c = 'A';
	printf("%c\n", ft_toupper(c));
} */
