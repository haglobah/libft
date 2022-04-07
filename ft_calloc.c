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
	void	*spc;

	spc = malloc(count * size);
	if (!spc)
		return (NULL);
	ft_bzero(spc, count * size);
	return (spc);
}
