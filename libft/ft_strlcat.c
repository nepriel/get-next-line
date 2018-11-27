/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:38:42 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/21 11:53:27 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t len;

	if (size != 0)
	{
		i = 0;
		while (dst[i] && i < size)
			i++;
		len = i;
		while (src[i - len] && i < size - 1)
		{
			dst[i] = src[i - len];
			i++;
		}
		if (len < size)
			dst[i] = '\0';
	}
	if (size == 0)
		return (ft_strlen(src));
	return (len + ft_strlen(src));
}
