/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:22:13 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/01 14:28:12 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* 
int main(void)
{
	int a = 1;
	int b = 2;
	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);

	node2->next = node1; // node2 is now the head

	printf("First node: %d\n", *(int *)node2->content);
	printf("Second node: %d\n", *(int *)node2->next->content);
	printf("Node count: %d\n", ft_lstsize(node2));
} */
