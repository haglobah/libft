/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:03:13 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:03:37 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skipwhite(const char *str, int *i)
{
	if (str == NULL || i == NULL)
		return ;
	while ((str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n')
	|| (str[*i] == '\r' || str[*i] == '\v' || str[*i] == '\f'))
		(*i)++;
}

int	ft_atoi(const char *a)
{
	long	i;
	long	nbr;
	int		isneg;

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
		return (-nbr);
	return (nbr);
}
