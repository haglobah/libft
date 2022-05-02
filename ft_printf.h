/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:37:32 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/02 15:15:05 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int		ft_printf(const char *input, ...);
int		ft_printc(char c);
int		ft_printstr(char *str);
int		ft_printp(uintptr_t ptr);
int		ft_printnum(int num, int unsigned_pred);
int		ft_printhex(unsigned int unum, char mode);
int		ft_strlen(const char *str);
int		ft_numlen(long long n, int base);
int		ft_plen(uintptr_t n);
void	ft_puthex(uintptr_t num, int to_upper);

#endif
