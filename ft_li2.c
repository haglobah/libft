/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_li2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:24:50 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 13:41:03 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lilen(t_li *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

t_li	*ft_liptolast(t_li *li)
{
	if (!li)
		return (li);
	if (!li->next)
		return (li);
	while (li->next->next)
		li = li->next;
	return (li);
}

void	ft_liiter(t_li *li, void (*f)(int))
{
	if (!li || !f)
		return ;
	while (li)
	{
		(*f)(li->val);
		li = li->next;
	}
}

t_li	*ft_limap(t_li *li, int (*f)(int), void (*del)(int))
{
	t_li	*new;
	t_li	*head;

	if (!li)
		return (NULL);
	head = NULL;
	while (li)
	{
		new = ft_lielem((*f)(li->val));
		if (!new)
		{
			ft_liclear(&li, del);
			new = NULL;
			return (new);
		}
		ft_li_app(&head, new);
		li = li->next;
	}
	return (head);
}
