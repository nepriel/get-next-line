/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:49:56 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 19:56:06 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int expo)
{
	int i;
	int res;

	res = nb;
	i = 1;
	if (expo == 0)
		return (1);
	else if (expo == 1)
		return (nb);
	else
	{
		while (i < expo)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
