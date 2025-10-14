/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:28:04 by lpaiva            #+#    #+#             */
/*   Updated: 2025/10/14 19:29:44 by lpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(unsigned int c)
{
	if ((c >= 0 && c <= 9))
		return (1);
	return (0);
}

int	ft_islett(unsigned int c )
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_isalnum(unsigned int c)
{
	if (ft_isdigit(c) || ft_islett(c))
		return (1);
	return (0);
}
