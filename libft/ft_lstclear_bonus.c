/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:34:31 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/25 19:34:31 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/* 
void	del(void *node)
{
	free(node);
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("Node content: %d\n", *(int *)head->content);
		head = head->next;
	}
}

int	main(void)
{
	t_list	*head = NULL;
	int		*a = malloc(sizeof(int));
	int		*b = malloc(sizeof(int));
	int		*c = malloc(sizeof(int));

	*a = 1;
	*b = 2;
	*c = 3;

	t_list *node1 = ft_lstnew(a);
	t_list *node2 = ft_lstnew(b);
	t_list *node3 = ft_lstnew(c);

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	print_list(head);

	ft_lstclear(&head, del);

	if (!head)
		printf("List cleared successfully\n");
	else
		printf("List was not cleared\n");
}
 */
