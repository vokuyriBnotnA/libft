/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klemongr <klemongr@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:24:36 by klemongr          #+#    #+#             */
/*   Updated: 2021/10/23 00:05:56 by klemongr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int symbol)
{
	if ((symbol >= '0' && symbol <= '9') || (symbol >= 'a' && symbol <= 'z')
		|| (symbol >= 'A' && symbol <= 'Z'))
		return (1);
	else
		return (0);
}
