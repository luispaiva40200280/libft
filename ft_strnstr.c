/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:51:16 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/17 00:32:54 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *str_b;
	const char *str_l;
	size_t		n_comp;


	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		str_l = little;
		str_b = big;
		n_comp = len;
		while (*str_l && n_comp && *str_b == *str_l)
		{
			str_b++;
			str_l++;
			n_comp--;
		}	
		if (!*str_l)
			return ((char *)(big ));
		big++;
		len--;
	}
	return (NULL);
}
