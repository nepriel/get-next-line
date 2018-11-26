/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintodec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:53:48 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 19:55:39 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bintodec(int nb)
{
	int size;
	int i;
	int tmp;
	int res;

	size = 0;
	res = 0;
	tmp = nb;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		size++;
	}
	i = 0;
	while (i < size)
	{
		if ((nb % ft_power(10, i + 1)) != 0)
			res = res + (1 * ft_power(2, i));
		i++;
	}
	return (res);
}
