/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:07:42 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:07:43 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	log_10(int num)
{
	int		counter;

	counter = 0;
	num /= 10;
	while (num != 0)
	{
		num /= 10;
		counter += 1;
	}
	return (counter);
}

int	pow_of(int base, int exp)
{
	int		result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp -= 1;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	int		exp;
	int		counter;
	long	num_long;

	num_long = (long) n;
	counter = 0;
	exp = log_10(num_long);
	while (counter <= exp)
	{
		if (num_long < 0)
		{
			num_long = -num_long;
			write(1, "-", 1);
		}
		digit = ((num_long / pow_of(10, exp - counter)) % 10) + 48;
		write(fd, &digit, 1);
		counter += 1;
	}
}
