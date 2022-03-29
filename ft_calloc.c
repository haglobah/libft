/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:04:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/29 16:54:25 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*spc;
	size_t	i;

	i = 0;
	if (count <= 0 || size <= 0)
		return (NULL);
	spc = malloc(count * size);
	if (!spc)
		return (NULL);
	while (i < count)
	{
		spc[i++] = 0;
	}
	return (spc);
}
