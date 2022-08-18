/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:52:34 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/15 00:49:05 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_much_digits(int num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		num *= (unsigned) -1;
		i++;
	}
	while (num / (unsigned) 10 != 0)
	{
		num /= (unsigned) 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		minus;

	res = (char *) malloc((how_much_digits(n) + 1) * sizeof(char));
	if (!(res))
		return (NULL);
	i = how_much_digits(n) - 1;
	minus = 0;
	if (n < 0)
	{
		minus = 1;
		n *= (unsigned) -1;
	}
	res[i + 1] = '\0';
	while (i >= 0)
	{
		res[i] = n % (unsigned) 10 + '0';
		n /= (unsigned) 10;
		i--;
	}
	if (minus == 1)
		res[0] = '-';
	return (res);
}
