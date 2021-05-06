/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:14:24 by hwon              #+#    #+#             */
/*   Updated: 2021/05/06 14:28:53 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		cmp;

	while (*s1 && *s2 && n)
	{
		cmp = *s1++ - *s2++;
		if (cmp != 0)
			return (cmp);
		n--;
	}
	if (n == 0)
		return (0);
	cmp = *s1 - *s2;
	return (cmp);
}
