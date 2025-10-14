/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:25:07 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/14 22:45:59 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (const unsigned char *)src;
	if (str_dest == str_src || n == 0)
		return (dest);
	if (str_dest < str_src)
	{
		while (n--)
			*str_dest++ = *str_src++;
	}
	else
	{
		str_dest += n;
		str_src += n;
		while (n--)
			*str_dest-- = *str_src--;
	}
	return (dest);
}
