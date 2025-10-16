/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:39:48 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/16 21:59:34 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*str;
	unsigned char	car;

	len = ft_strlen(s);
	str = (unsigned char *)s;
	car = (unsigned char)c;
	while (len + 1 != 0)
	{
		if (str[len] == car)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
