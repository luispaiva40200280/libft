/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:27:27 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/15 19:50:29 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c_find;

	str = (unsigned char *)s;
	c_find = (unsigned char)c;
	while (n--)
	{
		if (*str == c_find)
			return (str);
		str++;
	}
	return (NULL);
}
