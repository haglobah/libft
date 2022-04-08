/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:03:13 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/08 12:50:02 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skipwhite(const char *str, long long int *i)
{
	if (str == NULL || i == NULL)
		return ;
	while ((str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
		|| (str[*i] == '\r' || str[*i] == '\v' || str[*i] == '\f'))
		(*i)++;
}

int	ft_atoi(const char *a)
{
	long long	i;
	long long	nbr;
	int			isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	ft_skipwhite(a, &i);
	if (a[i] != '\0' && a[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (a[i] == '+')
		i++;
	while (a[i] != '\0' && ft_isdigit(a[i]))
		nbr = (nbr * 10) + (a[i++] - '0');
	if (isneg)
		nbr = -nbr;
	if (nbr / 10 > 922337203685477580 && nbr % 10 > 7)
		return (-1);
	if (nbr / 10 < -922337203685477580 && nbr % 10 > 8)
		return (0);
	return (nbr);
}
