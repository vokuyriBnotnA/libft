/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:50:05 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 19:21:56 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	if (ch > 256)
		ch -= 256;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *) &str[i]);
		if (str[i + 1] == ch)
			return ((char *) &str[i + 1]);
		i++;
	}
	if (ch == '\0' && str[i] == ch)
		return ((char *) &str[i]);
	return (NULL);
}
