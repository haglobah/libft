/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_li1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:41 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 11:05:12 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_li	*ft_lielem(int content)
{
	t_li	*new;

	new = (t_li *)malloc(sizeof(t_li) * 1);
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_li	*ft_licons(t_li *li1, int *li2)
{
	t_li	ret;

	ret = li1;
	if (!li1)
		return (li2);
	if (!li2)
		return (li1);
	while (*li1)
	{
		li1 = li1->next;
	}
	li1->next = li2;
	return (ret);
}

t_li	*ft_lilast(t_li *li)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_li_prep(t_li **lst, t_li *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}


void	ft_li_app(t_li **lst, t_li *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lilast(*lst)->next = new;
	else
		*lst = new;
}

