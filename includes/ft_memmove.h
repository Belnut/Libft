/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:33:24 by hwon              #+#    #+#             */
/*   Updated: 2021/05/03 13:34:58 by hwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMMOVE_H
# define FT_MEMMOVE_H

# include <unistd.h>

void	*memmove(void *dst, const void *src, size_t len);

#endif
