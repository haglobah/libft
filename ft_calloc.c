/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:04:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:04:35 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*arr;
	char	*d_arr;
	size_t	i;

	i = 0;
	if (nelem <= 0 || elsize <= 0)
		return ((void *) 0);
	arr = malloc(nelem * elsize);
	d_arr = (char *) arr;
	while (i < elsize)
	{
		d_arr[i] = 0;
		i++;
	}
	return (arr);
}
