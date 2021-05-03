/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:18:01 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 13:33:10 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmove.h"

void	*ft_memmmove(void *dst, const void *src, size_t len)
{
	unsigned char buf;
	unsigned char *d;
	unsigned char *s;

	d = dst;
	s = (unsigned char *)src;
	if (dst == 0 || src == 0 || len == 0)
		return (dst);
	while (len-- != 0)
	{
		buf = *s++;
		*d = buf;
	}
	return (dst);
}
