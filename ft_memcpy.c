/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:13:41 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/15 16:51:37 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*str_dest;
	const char	*str_src;

	if (!src && !dest)
		return (NULL);
	str_dest = (char *)dest;
	str_src = (const char *)src;
	while (n--)
		*str_dest++ = *str_src++;
	return (dest);
}

/* int main(void)
{
	char src[] = "Hello";
	char dest[10];

	printf("%p\n", ft_memcpy(NULL, NULL, 3)); // ✅ returns NULL, no crash

	ft_memcpy(dest, src, 6);
	printf("%s\n", dest); // ✅ prints "Hello"

	return 0;
} */