/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:31:46 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 22:10:00 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack[i] && !needle[j])
		return ((char *) haystack);
	if (!haystack[i])
		return (NULL);
	if (!needle[j])
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j] && (haystack[i + 1] == needle[j + 1]
				|| j + 1 == ft_strlen((char *) needle)))
			j++;
		if (j > 0)
		{
			if (j == ft_strlen((char *) needle))
				return ((char *) &haystack[i - j + 1]);
		}
		i++;
	}
	return (NULL);
}
