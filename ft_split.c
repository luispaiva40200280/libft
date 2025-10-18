/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:03:22 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/18 21:31:35 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countW(char const *s, char c)
{
	size_t	words;
	size_t	i;
	
	words = 0;
	i = 1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char *dup;
	
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	result = malloc(ft_countW(s,c) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j] = ft_strndup()
		}
	}
	
	return (NULL);
}
