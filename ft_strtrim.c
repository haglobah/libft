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

static int	is_in(int c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*trim_st(char *to_trim, char const *tr_set)
{
	int	i;

	i = 0;
	while (to_trim[i] && is_in(to_trim[i], tr_set))
		i++;
	return &to_trim[i];
}

static char	*trim_end(char *to_trim, char const *tr_set)
{
	int	i;

	i = 0;
	while (to_trim[i])
		i++;
	while (is_in(to_trim[--i], tr_set))
		;
	return (to_trim + i + 1);
}

char	*ft_strtrim(char const *to_trim, char const *tr_set)
{
	char	*cpy;
	char	*st;
	char	*end;
	char	*res;

	st = trim_st((char *) to_trim, tr_set);
	end = trim_end(st, tr_set);
	cpy = (char *) malloc(sizeof(char) * (end - st + 1));
	if (!cpy)
		return (NULL);
	res = cpy;
	while (st < end)
		*cpy++ = *st++;
	*cpy = '\0';
	return (res);
}
