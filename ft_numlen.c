/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:48:19 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/12 16:49:36 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long long n, int base)
{
	int	numlen;

	numlen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		numlen++;
		n = -n;
	}
	while (n)
	{
		n /= base;
		numlen++;
	}
	return (numlen);
}
