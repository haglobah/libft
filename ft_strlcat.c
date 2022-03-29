/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:09:19 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/29 18:12:10 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	if (dlen > dsize)
		dlen = dsize;
	slen = ft_strlen(src);
	i = 0;
	if (dsize > 0 && dlen < (dsize - 1))
	{
		while (src[i] && (i + dlen) < dsize - 1)
		{
			dst[i + dlen] = src[i];
			i++;
		}
		dst[dlen + i] = '\0';
	}
	return (slen + dlen);
}
