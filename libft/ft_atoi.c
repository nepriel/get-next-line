/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 09:29:02 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 15:09:55 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fisspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
				|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	fidigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] && fisspace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && fidigit(str[i]))
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb * neg);
}
