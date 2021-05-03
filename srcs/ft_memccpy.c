/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:04:10 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 13:36:41 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memccpy.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = (unsigned char *)src;
	while (n-- != 0)
	{
		*d++ = *s++;
		if (*(s - 1) == c)
			return (void *)(d);
	}
	return (0);
}
