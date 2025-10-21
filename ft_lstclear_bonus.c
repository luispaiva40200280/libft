/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:38:30 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/21 22:09:05 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*next_ptr;

	if (!*lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		next_ptr = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = next_ptr;
	}
	*lst = NULL;
}
