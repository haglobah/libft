/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:03:13 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/09 12:22:57 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skipwhite(const char *str, long long int *i, int *isneg)
{
	if (str == NULL || i == NULL)
		return ;
	while ((str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
		|| (str[*i] == '\r' || str[*i] == '\v' || str[*i] == '\f'))
		(*i)++;
	if (str[*i] != '\0' && str[*i] == '-')
	{
		*isneg = 1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
}

int	ft_atoi(const char *a)
{
	long long	i;
	long long	nbr;
	int			isneg;
	long long	long_max;

	i = 0;
	nbr = 0;
	isneg = 0;
	long_max = 922337203685477580;
	ft_skipwhite(a, &i, &isneg);
	while (a[i] != '\0' && ft_isdigit(a[i]))
	{
		if (nbr > long_max || (nbr == long_max && a[i] > '7'))
			return (!isneg * -1);
		nbr = (nbr * 10) + (a[i++] - '0');
	}
	if (isneg)
		nbr = -nbr;
	return (nbr);
}
