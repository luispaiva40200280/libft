/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:30:20 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/20 17:27:04 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nblen(long i)
{
	size_t	len;

	len = 0;
	if (i <= 0)
		len = 1;
	while (i)
	{
		i /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int i)
{
	char	*s_numb;
	long	nb;
	size_t	len;

	nb = i;
	len = ft_nblen(nb);
	s_numb = (char *)malloc((len + 1) * sizeof(char));
	if (!s_numb)
		return (NULL);
	s_numb[len--] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		s_numb[0] = '-';
	}
	if (nb == 0)
		s_numb[0] = '0';
	while (nb)
	{
		s_numb[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s_numb);
}
