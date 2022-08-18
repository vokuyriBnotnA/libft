/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:57:41 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/23 00:32:36 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*res;
	unsigned char	*src2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	res = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	i = 0;
	while (i < len && dst <= src)
	{
		res[i] = src2[i];
		i++;
	}
	while (len && dst > src)
	{
		res[len - 1] = src2[len - 1];
		len--;
	}
	return (dst);
}
