/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:13:25 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/02 14:35:45 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnum(long num)
{
	char	c;

	c = 0;
	if (num < 0)
	{
		ft_printstr("-");
		num = -num;
	}
	if (num / 10 > 0)
		ft_putnum(num / 10);
	c = num % 10 + '0';
	ft_printc(c);
}

int	ft_printp(uintptr_t ptr)
{
	int	char_count;

	char_count = 0;
	char_count += ft_printstr("0x");
	if (ptr == 0)
		char_count += ft_printc('0');
	else
	{
		ft_puthex(ptr, 0);
		char_count += ft_plen(ptr);
	}
	return (char_count);
}

int	ft_printnum(int num, int unsigned_pred)
{
	if (unsigned_pred)
	{
		ft_putnum((unsigned int)num);
		return (ft_numlen((unsigned int)num, 10));
	}
	else
	{
		ft_putnum(num);
		return (ft_numlen(num, 10));
	}
}

int	ft_printhex(unsigned int unum, char mode)
{
	if (mode == 'x')
		ft_puthex(unum, 0);
	else
		ft_puthex(unum, 1);
	return (ft_numlen(unum, 16));
}
