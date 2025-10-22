/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:17:25 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/22 17:50:44 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_node;
	t_list	*n_list;
	void	*n_content;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		n_content = f(lst->content);
		n_node = ft_lstnew(n_content);
		if (!n_node)
		{
			free(n_content);
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}
