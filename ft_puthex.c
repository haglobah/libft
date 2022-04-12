/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:50:13 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/12 16:50:31 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + c), 1);
	}
}
