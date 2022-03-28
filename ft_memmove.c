/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:06:49 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:06:50 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d_src;
	char	*d_dest;

	d_src = (char *) src;
	d_dest = (char *) dest;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			d_dest[i] = d_src[i];
			i++;
		}
		return (dest);
	}
	n--;
	while (n >= 0)
	{
		d_dest[n] = d_src[i];
		i++;
		n--;
	}
	return (dest);
}
