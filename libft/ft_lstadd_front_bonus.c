/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:04:30 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/12 16:19:55 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	int a = 1, b = 2;
	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	ft_lstadd_front(&node1, node2); // node2 becomes the new head
	printf("First node: %d\n", *(int *)node2->content);
	printf("Second node: %d\n", *(int *)node2->next->content);
}

