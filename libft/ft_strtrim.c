/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:40:58 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 14:38:38 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		i1blank(char const *s)
{
	int i;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
	{
		i++;
	}
	if (s[i] == '\0')
		return (-1);
	return (i);
}

static size_t	i2blank(char const *s)
{
	size_t i;

	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (i + 1);
}

char			*ft_strtrim(char const *s)
{
	int		i1;
	size_t	i2;
	char	*dst;
	size_t	len;

	if (s == NULL)
		return (NULL);
	i1 = i1blank(s);
	if (i1 == -1)
		return (ft_strnew(0));
	i2 = i2blank(s);
	len = i2 - i1;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while ((size_t)i1 < i2)
	{
		dst[i1 - (i2 - len)] = s[i1];
		i1++;
	}
	dst[i1 - (i2 - len)] = '\0';
	return (dst);
}
