/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:55:01 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/15 08:46:25 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int ret;

	ret = 0;
	while (n-- && (ret = *(unsigned char *)s1++ - *(unsigned char *)s2++) == 0)
	{
	}
	return (ret);
}
