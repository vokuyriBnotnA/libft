/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:50:05 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 22:47:57 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_str;
	char	*str;

	if (!s)
		return (NULL);
	if (len > ft_strlen((char *) s))
		len_str = ft_strlen((char *) s);
	else
		len_str = len;
	str = (char *) malloc(sizeof(*s) * (len_str + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len_str)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
