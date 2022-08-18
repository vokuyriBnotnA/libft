/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:17:52 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 19:08:10 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	char	*arr2;
	char	*res;

	if (c > 256)
		c -= 256;
	arr2 = (char *) arr;
	i = 0;
	while (i < n)
	{
		if (arr2[i] == c)
		{
			res = &arr2[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}
