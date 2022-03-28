/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:10:41 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:10:41 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *str, char c)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

static char	*trim(char const *s1, char const *set, int len, char *str_trim)
{
	int		i;
	int		j;
	int		start;
	int		end;
	int		k;

	i = 0;
	j = 0;
	end = 1;
	start = 1;
	k = 0;
	while (i < len - j)
	{
		while (start && is_in_set(set, s1[i]))
			i++;
		start = 0;
		str_trim[k] = s1[i];
		while (end && is_in_set(set, s1[len - j - 1]))
			j++;
		end = 0;
		i++;
		k++;
	}
	str_trim[k] = '\0';
	return (str_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		len;

	len = ft_strlen(s1);
	if (!s1 || !set)
		return ((void *) 0);
	str_trim = (char *) malloc(sizeof(char) * len + 1);
	str_trim = trim(s1, set, len, str_trim);
	return (str_trim);
}
