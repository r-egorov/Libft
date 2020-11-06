/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:06:18 by cisis             #+#    #+#             */
/*   Updated: 2020/11/06 11:19:20 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	unsigned int	val;
	unsigned int	numlen;

	numlen = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		numlen += 1;
		val = n * -1;
	}
	else
		val = n;
	while (val > 0)
	{
		val = val / 10;
		numlen += 1;
	}
	return (numlen);
}

char		*ft_itoa(int n)
{
	char			*res;
	char			*last;
	unsigned int	val;
	unsigned int	numlen;

	numlen = ft_numlen(n);
	if (!(res = (char*)malloc((numlen + 1) * sizeof(char))))
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	else if (n < 0)
	{
		*res = '-';
		val = n * -1;
	}
	else
		val = n;
	last = res + (numlen);
	*last = '\0';
	while (val > 0)
	{
		*--last = (val % 10) + '0';
		val = val / 10;
	}
	return (res);
}
