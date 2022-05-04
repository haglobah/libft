/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_li1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:04:41 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 13:05:30 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_li	*ft_lielem(int val)
{
	t_li	*new;

	new = (t_li *)malloc(sizeof(t_li) * 1);
	if (!new)
		return (NULL);
	new->val = val;
	new->next = NULL;
	return (new);
}

t_li	*ft_licons(t_li *li1, t_li *li2)
{
	t_li	*ret;

	ret = li1;
	if (!li1)
		return (li2);
	if (!li2)
		return (li1);
	while (li1)
	{
		li1 = li1->next;
	}
	li1->next = li2;
	return (ret);
}

t_li	*ft_lilast(t_li *li)
{
	if (!li)
		return (NULL);
	while (li->next)
		li = li->next;
	return (li);
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
