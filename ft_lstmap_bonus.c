/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:17:25 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/21 23:02:30 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_node;
	t_list	*n_tail;
	t_list	*n_head;

	if (!lst || !f || !del)
		return (NULL);
	n_head = NULL;
	n_tail = NULL;
	while (lst)
	{
		n_node = malloc(sizeof(t_list));
		if (!n_node)
		{
			ft_lstclear(&n_node, del);
			return (NULL);
		}
		n_node->content = f(lst->content);
		n_node->next = NULL;
		if (!n_tail)
			n_head = n_node;
		else
			n_tail->next = n_node;
		n_tail = n_node;
		lst = lst->next;
	}
	return (n_head);
}
