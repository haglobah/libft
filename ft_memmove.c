/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:06:49 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/29 17:36:02 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cp_l2r(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	cp_r2l(char *dst, const char *src, size_t n)
{
	while (n)
	{
		dst[n - 1] = src[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d_src;
	char	*d_dst;

	d_src = (char *) src;
	d_dst = (char *) dst;
	if (src < dst)
	{
		cp_r2l(d_dst, d_src, n);
	}
	else
	{
		cp_l2r(d_dst, d_src, n);
	}
	return (dst);
}
