/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:06:16 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:06:18 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d_s;

	d_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (d_s[i] == (unsigned char) c)
			return (d_s + i);
		i++;
	}
	return (NULL);
}
