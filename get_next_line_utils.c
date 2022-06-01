/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:09:07 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/06/01 11:06:08 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_strjoin(char const *s1, char const *s2)
{
	char	*str_cons;
	int		i;
	int		j;
	int		reslen;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	reslen = gnl_strlen(s1) + gnl_strlen(s2) + 1;
	str_cons = (char *)malloc(sizeof(char) * reslen);
	if (!str_cons)
		return (NULL);
	i = -1;
	while (s1[++i])
		str_cons[i] = s1[i];
	j = -1;
	while (s2[++j])
		str_cons[j + i] = s2[j];
	str_cons[j + i] = '\0';
	return (str_cons);
}

char	*gnl_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

void	gnl_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*gnl_calloc(size_t count, size_t size)
{
	char	*spc;

	spc = malloc(count * size);
	if (!spc)
		return (NULL);
	gnl_bzero(spc, count * size);
	return (spc);
}

size_t	gnl_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
