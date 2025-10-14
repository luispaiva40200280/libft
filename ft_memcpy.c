/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:13:41 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/14 19:25:49 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *str_dest;
	const unsigned char *str_src;
	
	str_dest = (unsigned char*)dest;
	str_src = (const unsigned char*)src;
	while (n--)
		*str_dest++ = *str_src++;
	return (dest);
}