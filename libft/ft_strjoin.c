/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:04:49 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 17:03:21 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(*s) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	i2 = 0;
	while (s1[i])
	{
		s[i2] = s1[i];
		i++;
		i2++;
	}
	i = 0;
	while (s2[i])
	{
		s[i2] = s2[i];
		i++;
		i2++;
	}
	s[i2] = '\0';
	return (s);
}
