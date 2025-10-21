/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:01:59 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/21 19:34:26 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_ptr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	last_ptr = *lst;
	while (last_ptr->next)
		last_ptr = last_ptr->next;
	last_ptr->next = new;
}
