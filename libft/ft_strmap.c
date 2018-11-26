/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:59:54 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/15 11:49:47 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	char	*new;
	int		i;

	new = NULL;
	if (s)
	{
		len = ft_strlen(s);
		new = (char *)malloc(sizeof(*new) * (len + 1));
		if (!new)
			return (NULL);
		new[len] = '\0';
		i = 0;
		while (len--)
		{
			new[i] = f(s[i]);
			i++;
		}
	}
	return (new);
}
