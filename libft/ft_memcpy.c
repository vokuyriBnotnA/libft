/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:45:46 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/15 00:46:04 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*res;
	unsigned char	*src2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	res = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		res[i] = src2[i];
		i++;
	}
	return (dst);
}
