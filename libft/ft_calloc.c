/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 23:31:09 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 23:34:45 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_calloc_2(void	*arr, size_t	n)
{
	unsigned char	*res;

	res = (unsigned char *) arr;
	while (n--)
		res[n] = 0;
}

void	*ft_calloc(size_t	count, size_t	size)
{
	unsigned char	*p;

	p = (unsigned char *) malloc(count * size);
	if (!p)
		return (NULL);
	else
	{
		ft_calloc_2(p, count * size);
		return (p);
	}
}
