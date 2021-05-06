/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:55:24 by hwon              #+#    #+#             */
/*   Updated: 2021/05/06 17:45:19 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	index;

	if (!s)
		return (0);
	index = 0;
	count = 1;
	while (s[index])
		if (s[index++] == c)
			count++;
	return (count);
}

size_t	get_wordlen(const char *s, char c)
{
	size_t len;

	len = 0;
	while (*s)
		if (*s++ == c)
			break ;
		else
			len++;
	return (len);
}

void	free_words(char **words)
{
	while (*words)
		free(*words);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char		**words;
	const char	*start;
	size_t		index;
	size_t		size;

	if (!s)
		return (0);
	size = word_count(s, c);
	words = malloc(sizeof(char *) * (size + 1));
	if (!words)
		return (0);
	index = 0;
	start = s;
	ft_memset(words, 0, sizeof(char *) * (size + 1));
	while (index < size)
	{
		words[index] = ft_substr(start, 0, get_wordlen(start, c));
		if (words[index++] == 0)
		{
			free_words(words);
			return (0);
		}
		start += (get_wordlen(start, c) + 1);
	}
	return (words);
}
