/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:07:07 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/29 16:15:05 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*res;

	res = (unsigned char *) str;
	while (len)
	{
		*res = (unsigned char)c;
		res++;
		len--;
	}
	return (str);
}
