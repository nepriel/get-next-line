/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 10:49:55 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 15:11:18 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fneg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		tp;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = (2);
	tp = n;
	neg = 0;
	fneg(&n, &neg);
	while (tp /= 10)
		len++;
	len = len + neg;
	if (!(s = (char *)malloc(sizeof(*s) * (len))))
		return (NULL);
	s[--len] = '\0';
	while (len--)
	{
		s[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
