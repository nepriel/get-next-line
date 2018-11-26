/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 15:17:27 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 18:14:15 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*s;

	i = 0;
	s = malloc(sizeof(s) * size);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, size);
	return (s);
}
