/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:05:02 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/13 11:24:41 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	new = (char *)malloc(sizeof(*s1) * (len + 1));
	if (new)
	{
		i = 0;
		while (i < len)
		{
			new[i] = s1[i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
