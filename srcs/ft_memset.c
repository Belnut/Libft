/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:19:49 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 14:18:40 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memest(void *b, int c, size_t len)
{
	unsigned char	*target;

	if (b == 0 || len == 0)
		return (b);
	target = (unsigned char *)b;
	while (len-- != 0)
		*target++ = c;
	return (b);
}
