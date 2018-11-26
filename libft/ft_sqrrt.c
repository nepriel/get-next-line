/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:31:48 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 21:10:31 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrrt(int nb)
{
	int res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb < 0)
	{
		ft_putstr("invalid input : negative integrer\n");
		return (0);
	}
	else
		while ((res * res) <= nb)
			res++;
	return (res - 1);
}
