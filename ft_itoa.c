/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:05:54 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:05:55 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	numlen;

	numlen = 0;
	while(n)
	{
		n /= 10;
		numlen++;
	}
	return (numlen);
}

static int	ft_pow(int n, int exp)
{
	int	res;

	if (exp == 0)
		return (1);
	res = n;
	while (exp > 1)
	{
		res *= n;
		exp--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*s;
	int		div;
	int		i;

	i = 0;
	num = n;
	s = malloc(sizeof(char) * (numlen(num) + 1));
	if (!s)
		return (NULL);
	if (num < 0)
	{
		s[i++] = '-';
		num = -num;
	}
	div = ft_pow(10, numlen(num) - 1);
	while (div > 0)
	{
		s[i++] = num / div + '0';
		num = num % div;
		div = div / 10;
	}
	s[i] = '\0';
	return (s);
}
