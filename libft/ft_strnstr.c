/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:10:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/15 11:37:32 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t i2;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		i2 = 0;
		while ((needle[i2] == haystack[i + i2]) && needle[i] && (i + i2 < len))
		{
			if (needle[i2 + 1] == '\0')
				return ((char*)haystack + i);
			i2++;
		}
		i++;
	}
	return (NULL);
}
