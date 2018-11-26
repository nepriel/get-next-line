/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:35:53 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 20:45:52 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprime(int nb)
{
	int root;
	int i;

	root = ft_sqrrt(nb);
	if (root >= 2)
	{
		i = 2;
		while (i <= root)
		{
			if ((nb % i) == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else if (nb == 2 || nb == 3)
		return (1);
	else
		return (0);
}
