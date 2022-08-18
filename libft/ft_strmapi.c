/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:50:40 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 22:13:27 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	res = (char *) malloc((ft_strlen((char *) s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (!s[i] || !f)
	{
		res[i] = 0;
		return (res);
	}
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
