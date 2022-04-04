/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:10:32 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/04 18:56:45 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	if ('\0' == c)
		return ((char *)(s + i));
	while (--i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (NULL);
}
