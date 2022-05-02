/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:37:29 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/02 14:35:16 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"

static int	handle_printf(char const *input, va_list args)
{
	int	fmt_count;

	fmt_count = 0;
	if (*input == 'c')
		fmt_count += ft_printc(va_arg(args, int));
	else if (*input == 's')
		fmt_count += ft_printstr(va_arg(args, char *));
	else if (*input == 'p')
		fmt_count += ft_printp(va_arg(args, unsigned long long));
	else if (*input == 'd' || *input == 'i')
		fmt_count += ft_printnum(va_arg(args, int), 0);
	else if (*input == 'u')
		fmt_count += ft_printnum(va_arg(args, unsigned int), 1);
	else if (*input == 'x' || *input == 'X')
		fmt_count += ft_printhex(va_arg(args, unsigned int), *input);
	else if (*input == '%')
		fmt_count += ft_printc('%');
	return (fmt_count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		char_count;
	int		i;

	i = 0;
	char_count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			char_count += handle_printf(input + i, args);
		}
		else
			char_count += ft_printc(input[i]);
		i++;
	}
	va_end(args);
	return (char_count);
}
