/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:39:35 by cisis             #+#    #+#             */
/*   Updated: 2021/05/13 13:05:03 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		chr;
	const unsigned char	*src;

	src = (const unsigned char *)s;
	chr = (unsigned char)c;
	while (n-- > 0)
	{
		if (*src == chr)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
