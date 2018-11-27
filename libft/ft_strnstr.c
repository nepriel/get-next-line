/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:10:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/21 16:31:45 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len2;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	len2 = ft_strlen(needle);
	while (haystack[i] && len-- >= len2)
	{
		if (haystack[i] == needle[0] \
				&& ft_memcmp((haystack + i), needle, len2) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
