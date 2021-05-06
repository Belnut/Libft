/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:30:46 by hwon              #+#    #+#             */
/*   Updated: 2021/05/07 00:51:19 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_start(const char *str, const char *set)
{
	size_t	start;

	start = 0;
	while (str[start])
	{
		if (!ft_strchr(set, str[start]))
			break ;
		start++;
	}
	return (start);
}

int		find_back(const char *str, const char *set)
{
	size_t back;

	back = ft_strlen(str) - 1;
	while (back != 0)
	{
		if (!ft_strchr(set, str[back]))
			break;
		back--;
	}
	return (back);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dup;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = find_start(s1, set);
	end = find_back(s1, set);
	if (start > end)
		return (ft_strdup(""));
	dup = ft_substr(s1, start, (end - start) + 1);
	return (dup);
}
