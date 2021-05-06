/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:18:01 by hwon              #+#    #+#             */
/*   Updated: 2021/05/06 21:08:23 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	if (dst == 0 || src == 0)
		return (0);
	if (len == 0)
		return (dst);
	if (dst < src)
	{
		d = dst;
		s = (unsigned char *)src;
		while (len-- != 0)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *)dst + (len - 1);
		s = (unsigned char *)src + (len - 1);
		while (len-- != 0)
			*d-- = *s--;
	}
	return (dst);
}
