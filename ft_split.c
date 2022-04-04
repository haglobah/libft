/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:08:29 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/03/28 19:08:29 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, int c)
{
	int	word_count;
	int	was_word;

	word_count = 0;
	was_word = 0;
	while (*str)
	{
		if (*str == c && was_word)
		{
			word_count++;
			was_word = 0;
		}
		else if (*str != c && !was_word)
			was_word = 1;
		str++;
	}
	return (word_count);
}

static int	make_split(int st, int end, char const *str, char **strlist)
{
	int	i;

	*strlist = (char *)malloc(sizeof(char) * (end - st + 1));
	if (!(*strlist))
		return (0);
	i = 0;
	while (st < end)
	{
		(*strlist)[i] = str[st];
		i++;
		st++;
	}
	(*strlist)[i] = '\0';
	return (1);
}

static void	*free_all(char **str, int spl_count)
{
	int	i;

	i = 0;
	while (i < spl_count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		spl_count;
	int		i;
	int		j;

	spl_count = 0;
	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	while (s[i])
	{
		if (s[i] == c)
		{
			if (!make_split(j, i, s, &res[spl_count]))
				return (free_all(res, spl_count));
			j = i;
			spl_count++;
		}
		i++;
	}
	res[spl_count] = NULL;
	return (res);
}
