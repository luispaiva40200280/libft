/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:39:51 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/16 21:59:21 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	car;

	str = (unsigned char *)s;
	car = (unsigned char)c;
	while (*str)
	{
		if (*str == car)
			return ((char *)str);
		str++;
	}
	if (car == '\0')
		return ((char *)str);
	return (NULL);
}
