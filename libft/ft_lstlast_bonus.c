/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:53:51 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/05 14:19:50 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
	printf("Second node: %d\n\n", *(int *)node2->next->content);

	t_list *last = ft_lstlast(node2);
	printf("Last node: %d\n", *(int *)last->content);
} */
