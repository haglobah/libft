/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:08:29 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/05 16:36:07 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *str, int c)
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
	if (was_word)
		word_count++;
	return (word_count);
}

static int	wordlen(char const *str, int delim)
{
	int	wlen;

	wlen = 0;
	while (str[wlen] && str[wlen] != delim)
		wlen++;
	return (wlen);
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
	int		words;
	int		chr;
	int		word_count;

	words = num_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	chr = 0;
	word_count = 0;
	while (word_count < words)
	{
		while (s[chr] && s[chr] == c)
			chr++;
		res[word_count] = ft_substr(s, chr, wordlen(s + chr, c));
		if (!res[word_count])
			return (free_all(res, word_count - 1));
		chr += wordlen(s + chr, c);
		word_count++;
	}
	res[words] = NULL;
	return (res);
}
