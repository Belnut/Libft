/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <ohj8447@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:57:20 by hwon              #+#    #+#             */
/*   Updated: 2021/05/06 16:19:53 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	index;

	if (!s || start < 0)
		return (0);
	dup = malloc(sizeof(len));
	if (!dup)
		return (0);
	index = 0;
	while (index < len && s[start])
		dup[index++] = s[start++];
	dup[index] = 0;
	return (dup);
}
