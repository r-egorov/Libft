/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cisis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:38:20 by cisis             #+#    #+#             */
/*   Updated: 2021/05/13 13:23:42 by cisis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s1);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res)
		ft_memcpy(res, s1, len + 1);
	return (res);
}
