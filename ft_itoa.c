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
#include <stdio.h>

static int	get_strnum_len(int n)
{
	int	counter;

	counter = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		remainder;
	int		i;
	int		len;
	int		minus;

	minus = 0;
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	len = get_strnum_len(n);
	if (minus)
		len++;
	str = (char *) malloc(sizeof(char) * len + 1);
	i = len - 1;
	str[len] = '\0';
	while (i >= 0)
	{
		remainder = n % 10;
		n = (n - remainder) / 10;
		str[i] = remainder + '0';
		if (minus && i == 0)
			str[i] = '-';
		i--;
	}
	return (str);
}
