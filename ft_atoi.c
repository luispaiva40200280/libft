/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:55:55 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/17 20:01:09 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspac(char c)
{
	return (c == '\t' || c == ' ' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	count;

	sign = 1;
	count = 0;
	while (*nptr && ft_isspac((unsigned char)*nptr))
		nptr++;
	if (*nptr == '-')
	{
		sign *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr && ft_isdigit((unsigned char)*nptr))
	{
		count = (count * 10) + (*nptr - '0');
		nptr++;
	}
	return (count * sign);
}
