/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:10:32 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/15 11:36:31 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int i2;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		i2 = 0;
		while (needle[i2] == haystack[i + i2])
		{
			if (needle[i2 + 1] == '\0')
				return ((char*)haystack + i);
			i2++;
		}
		i++;
	}
	return (NULL);
}
