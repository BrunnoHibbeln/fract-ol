/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <brunnohibbeln@student.42lisbo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:57:50 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/04/25 19:57:50 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
void	print_list(void *content)
{
	printf("Node content: %d\n", *(int *)content);
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

	ft_lstiter(head, print_list);
}
 */