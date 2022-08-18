/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:30:21 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/15 00:36:35 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		x;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *) s1);
	j = ft_strlen((char *) s2);
	res = (char *) malloc((i + j + 1) * sizeof(char));
	if (!(res))
		return (NULL);
	x = 0;
	while (x < (i + j))
	{
		if (x < i)
			res[x] = s1[x];
		else
			res[x] = s2[x - i];
		x++;
	}
	res[x] = '\0';
	return (res);
}
