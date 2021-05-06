/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:30:46 by hwon              #+#    #+#             */
/*   Updated: 2021/05/07 00:21:03 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isset(int c, char const *set)
{
	size_t	start;

	start = 0;
	while (set[start])
		if (c == set[start++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	size_t	index;
	size_t	s1_index;

	if (!s1)
		return (0);
	dup = malloc(ft_strlen(s1) + 1);
	if (!dup)
		return (0);
	index = 0;
	s1_index = 0;
	while (s1[s1_index])
		if (!isset(s1[s1_index], set))
			dup[index++] = s1[s1_index++];
		else
			s1_index++;
	dup[index] = 0;
	return (dup);
}
