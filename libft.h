/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:11:31 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/02 15:18:33 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include "ft_printf.h"

void	ft_bzero(void *s, size_t n);
int		ft_isprint(int c);
int		ft_toupper(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memset(void *str, int c, size_t len);
int		ft_strlen(const char *str);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
int		ft_tolower(int c);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *a);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	*ft_id(void *el);
void	ft_nodel(void *el);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstlen(t_list *lst);
void	ft_lstcpy(t_list *orig, t_list **place);
//t_list	ft_push(t_list stack, void *elem);
void	ft_push1(t_list **stack, void *elem);
//t_list	ft_pop(t_list stack);
t_list	*ft_pop1(t_list **stack);

typedef struct s_li
{
	int			val;
	struct s_li	*next;
}	t_li;

int	ft_idi(int i);
void	ft_nodeli(int i);

t_li	*ft_lielem(int val);
t_li	*ft_licons(t_li *li1, int *li2);
void	ft_li_prep(t_li **li, t_li *new);
int		ft_lilen(t_li *li);
t_li	*ft_lilast(t_li *li);
void	ft_li_app(t_li **li, t_list *new);
void	ft_lidelone(t_li *li, void (*del)(int));
void	ft_liclear(t_li **li, void (*del)(int));
void	ft_liiter(t_li *li, void (*f)(int));
t_li	*ft_limap(t_li *li, void *(*f)(int), void (*del)(int));
t_li	*ft_licpy(t_li *orig);


// ADDITIONS
void	ft_puthex(uintptr_t num, int to_upper);

#endif
