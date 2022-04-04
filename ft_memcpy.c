/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:06:34 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:06:58 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ch_dest;
	char	*ch_src;

	ch_dest = (char *) dest;
	ch_src = (char *) src;
	if (n <= 0)
		return (dest);
	while (n--)
		*ch_dest++ = *ch_src++;
	return (dest);
}
