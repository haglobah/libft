/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printh.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:47:14 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/02 15:15:24 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_numlen(long long n, int base)
{
	int	numlen;

	numlen = 0;
	if (n == 0)
		return (1);
	if (base == 10)
	{
		if (n < 0)
		{
			numlen++;
			n = -n;
		}
	}
	while (n)
	{
		n /= base;
		numlen++;
	}
	return (numlen);
}

int	ft_plen(uintptr_t n)
{
	int	numlen;

	if (n == 0)
		return (1);
	numlen = 0;
	while (n)
	{
		n /= 16;
		numlen++;
	}
	return (numlen);
}

void	ft_puthex(uintptr_t num, int to_upper)
{
	char	c;

	c = 'a';
	if (to_upper)
		c = 'A';
	if (num >= 16)
	{
		ft_puthex(num / 16, to_upper);
		ft_puthex(num % 16, to_upper);
	}
	else
	{
		if (num <= 9)
			ft_printc(num + '0');
		else
			ft_printc(num - 10 + c);
	}
}
