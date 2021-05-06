/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:55:24 by hwon              #+#    #+#             */
/*   Updated: 2021/05/07 02:03:03 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *str, char c)
{
	const char	*start;
	int			word_size;
	int			count;

	count = 0;
	start = str;
	while (1)
	{
		while (*str != '\0' && *str == c)
			str++;
		start = str;
		word_size = 0;
		while (*str != '\0' && *str != c)
		{
			str++;
			word_size++;
		}
		if (word_size > 0)
			count++;
		if (*str == '\0')
			break ;
		str++;
	}
	return (count);
}

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;
	char	*anchor;

	if ((dup = malloc(sizeof(char) * (n + 1))) == 0)
		return (0);
	anchor = dup;
	while (n > 0)
	{
		*dup++ = *str++;
		n--;
	}
	*dup = '\0';
	return (anchor);
}

void	add_words(char **dest, const char *str, char c)
{
	const char	*start;
	int			word_size;

	start = str;
	while (1)
	{
		while (*str != '\0' && *str == c)
			str++;
		start = str;
		word_size = 0;
		while (*str != '\0' && *str != c)
		{
			str++;
			word_size++;
		}
		if (word_size > 0)
			*dest++ = ft_strndup(start, word_size);
		if (*str == '\0')
			break ;
		str++;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**words;
	int		size;

	if (!str)
		return (0);
	size = ft_count_words(str, c);
	words = malloc(sizeof(char *) * (size + 1));
	if (words == 0)
		return (0);
	add_words(words, str, c);
	words[size] = 0;
	return (words);
}
