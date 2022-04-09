/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:06:34 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/09 12:20:12 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ch_dest;
	char	*ch_src;

	ch_dest = (char *) dst;
	ch_src = (char *) src;
	if (src == dst)
		return (dst);
	while (n--)
		*ch_dest++ = *ch_src++;
	return (dst);
}
