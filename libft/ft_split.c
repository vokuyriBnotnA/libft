/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:13:43 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/22 23:45:16 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words_count(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**malloc_error(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static char	**ft_split_add(char **res, char const *s, char c, size_t *i)
{
	while (s[i[0]])
	{
		if ((s[i[0] - 1] == c && s[i[0]] != c) || (s[0] != c && i[0] == 0))
		{
			res[i[1]] = (char *) malloc(ft_word_count(&s[i[0]], c) + 1);
			if (!res[i[1]])
				return (malloc_error(res));
		}
		if (s[i[0]] != c)
		{
			res[i[1]][i[2]] = (char) s[i[0]];
			i[2]++;
		}
		if (s[i[0]] != c && (s[i[0] + 1] == c || s[i[0] + 1] == 0))
		{
			res[i[1]][i[2]] = 0;
			i[1]++;
			i[2] = 0;
		}
		i[0]++;
	}
	res[i[1]] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	*i;

	if (!s)
		return (NULL);
	res = (char **) malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!res)
		return (NULL);
	i = (size_t *) malloc(3 * sizeof(size_t));
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	res = ft_split_add(res, s, c, i);
	free(i);
	return (res);
}
