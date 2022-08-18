/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:50:48 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 19:30:51 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = -1;
	if (ch > 256)
		ch -= 256;
	while (str[i])
	{
		if (str[i] == ch)
			j = i;
		if (str[i + 1] == ch)
			j = i + 1;
		i++;
	}
	if (ch == '\0' && str[i] == ch)
		return ((char *) &str[i]);
	if (j == -1)
		return (NULL);
	else
	{
		res = (char *)&str[j];
		return (res);
	}
}
