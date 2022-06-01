/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:09:12 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/06/01 11:04:08 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char		*get_next_line(int fd);
size_t		gnl_strlen(const char *str);
char		*gnl_strjoin(char const *s1, char const *s2);
char		*gnl_strchr(const char *s, int c);
void		*gnl_calloc(size_t count, size_t size);
void		gnl_bzero(void *s, size_t size);

#endif