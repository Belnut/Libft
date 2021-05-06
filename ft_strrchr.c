/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:07:38 by hwon              #+#    #+#             */
/*   Updated: 2021/05/06 21:27:11 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*hook;

	hook = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			hook = (char *)s;
		s++;
	}
	if (c == 0)
		return (char *)(s);
	return (hook);
}
