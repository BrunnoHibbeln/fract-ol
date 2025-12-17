/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:10:04 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/24 19:10:04 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* 
void	del(void *content)
{
	(void)content;
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("Node content: %d\n", *(int *)head->content);
		head = head->next;
	}
}

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;

	t_list *head = NULL;

	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	t_list *node3 = ft_lstnew(&c);
	ft_lstadd_back(&head, node1); // head -> node1
	ft_lstadd_back(&head, node2); // node1 -> node2
	ft_lstadd_back(&head, node3); // node2 -> node3

	node1->next = node3;
	ft_lstdelone(node2, &del);
	print_list(head);
} */
