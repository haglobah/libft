/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:06:14 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/18 11:06:41 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisin(char *needle, char **box)
{
	while (*box != NULL)
	{
		if (ft_strcmp(needle, *box) == 0)
			return (1);
		box++;
	}
	return (0);
}

int	ft_striseq(char *s1, char *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}
