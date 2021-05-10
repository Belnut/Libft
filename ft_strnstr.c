/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:14:02 by hwon              #+#    #+#             */
/*   Updated: 2021/05/10 18:36:26 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hsk;
	const char	*nde;

	if (*needle == '\0')
		return ((char *)haystack);
	nde = needle;
	hsk = haystack;
	while (1)
	{
		if (*nde == '\0')
			return ((char *)(hsk - (nde - needle)));
		if (*hsk == *nde)
			nde++;
		else
			nde = needle;
		if (*hsk == '\0' || len == 0)
			break ;
		hsk++;
		len--;
	}
	return (0);
}
