/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:54:39 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/15 00:14:05 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_add(unsigned int res, int minus, int overflow)
{
	if (overflow == 1)
	{
		if (minus == 1)
			return (0);
		return (-1);
	}
	if (minus == 1)
		return (-res);
	return (res);
}

int	ft_atoi(const char *str)
{
	int				v[4];
	unsigned int	res;

	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	res = 0;
	while (ft_isdigit(str[v[0]]) || (res == 0 && (str[v[0]] == ' '
				|| (str[v[0]] >= '\t' && str[v[0]] <= '\r')
				|| ((str[v[0]] == '-'
						|| str[v[0]] == '+') && ft_isdigit(str[v[0] + 1])))))
	{
		if (str[v[0]] == '-')
			v[1] = 1;
		if (res > INT32_MAX)
			v[2] = 1;
		if (ft_isdigit(str[v[0]]))
		{
			res += str[v[0]] - '0';
			if (ft_isdigit(str[v[0] + 1]))
				res *= 10;
		}
		v[0]++;
	}
	return (ft_atoi_add(res, v[1], v[2]));
}
