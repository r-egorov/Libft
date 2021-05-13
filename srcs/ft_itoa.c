/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:06:18 by cisis             #+#    #+#             */
/*   Updated: 2021/05/13 13:02:38 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int n)
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

static void	execute_itoa(int n, unsigned int numlen, char **result)
{
	char			*last;
	char			*res;
	unsigned int	val;

	res = *result;
	if (n < 0)
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
		*--last = (char)((val % 10) + '0');
		val = val / 10;
	}
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	numlen;

	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	res = (char *)malloc((numlen + 1) * sizeof(char));
	if (!res)
		return (NULL);
	execute_itoa(n, numlen, &res);
	return (res);
}
