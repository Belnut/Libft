/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:00:49 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 13:04:00 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMCCPY_H
# define FT_MEMCCPY_H

# include <unistd.h>

void	*memccpy(void *dst, const void *src, int c, size_t n);

#endif
