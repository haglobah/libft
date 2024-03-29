/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:05:54 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/12 16:54:37 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_gena(char *res, long num, int len, int isneg)
{
	if (num != 0)
		res = (char *)malloc(sizeof(char) * (len + 1));
	else
		return (res = ft_strdup("0"));
	if (!res)
		return (0);
	isneg = 0;
	if (num < 0)
	{
		isneg++;
		num = -num;
	}
	res[len] = '\0';
	while (--len)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	if (isneg == 1)
		res[0] = '-';
	else
		res[0] = (num % 10) + '0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	num;
	int		isneg;

	num = n;
	res = NULL;
	len = ft_numlen(num, 10);
	isneg = 0;
	res = ft_gena(res, num, len, isneg);
	if (!res)
		return (0);
	return (res);
}
