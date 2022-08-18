/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:21:07 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 23:23:14 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize > ft_strlen(dst))
	{
		res = ft_strlen(dst) + ft_strlen((char *) src);
		while (src[j] && i + 1 < dstsize)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	else
		res = dstsize + ft_strlen((char *) src);
	return (res);
}
