/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:04:50 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/24 13:04:50 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}
/* 
void print_list(t_list *head)
{
	while (head)
	{
		printf("Node content: %d\n", *(int *)head->content);
		head = head->next;
	}
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	t_list *head = NULL;

	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	t_list *node3 = ft_lstnew(&c);

	ft_lstadd_back(&head, node1); // head -> node1
	ft_lstadd_back(&head, node2); // node1 -> node2
	ft_lstadd_back(&head, node3); // node2 -> node3

	print_list(head);
}
 */