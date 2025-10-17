/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:54:45 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/17 20:53:53 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupstr;
	size_t	len;

	len = ft_strlen(s);
	dupstr = malloc(len + 1);
	if (!dupstr)
		return (NULL);
	while (*s)
	{
		*dupstr = *s;
		s++;
		dupstr++;
	}
	*dupstr = '\0';
	return (dupstr - len);
}
