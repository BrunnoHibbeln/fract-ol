/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:34:11 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/09 13:23:33 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/* 
int	main(void)
{
	// test integer
	int value = 918273;
	t_list	*node1 = ft_lstnew(&value);
	printf("Node content: %d\n", *(int *)node1->content);
	printf("Next pointer: %.4p\n", (void *)node1->next);
	printf("\n");
	// test string
	t_list	*node2 = ft_lstnew("String");
	printf("Node content: %s\n", (char *)node2->content);
	printf("Next pointer: %.4p\n", (void *)node2->next);
} */