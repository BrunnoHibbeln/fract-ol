/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:16:47 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/05/12 16:18:01 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

void *double_number(void *content)
{
	int *original = (int *)content;
	int *copy = malloc(sizeof(int));
	if (!copy)
		return (NULL);
	*copy = (*original) * 2;
	return (copy);
}

void	print_list(void *content)
{
	printf("Node content: %d\n", *(int *)content);
}

void	del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *head = NULL;
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));
	*a = 1; *b = 2; *c = 3;

	ft_lstadd_back(&head, ft_lstnew(a));
	ft_lstadd_back(&head, ft_lstnew(b));
	ft_lstadd_back(&head, ft_lstnew(c));

	t_list *mapped = ft_lstmap(head, double_number, del);

	ft_lstiter(mapped, print_list);
	ft_lstclear(&head, del);
	ft_lstclear(&mapped, del);
}

