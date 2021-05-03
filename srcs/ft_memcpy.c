/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:41:22 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 13:36:53 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcpy.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (n == 0 || dst == 0 || src == 0)
		return (dst);
	while (n-- != 0)
		*d++ = *s++;
	return (dst);
}
