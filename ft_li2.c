/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_li2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:24:50 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 11:25:10 by bhagenlo         ###   ########.fr       */
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

void	ft_liiter(t_li *li, void (*f)(int))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->val);
		lst = lst->next;
	}
}

t_li	*ft_limap(t_li *li, void *(*f)(int), void (*del)(int))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new = ft_lielem((*f)(lst->val));
		if (!new)
		{
			ft_liclear(&lst, del);
			new = NULL;
			return (new);
		}
		ft_li_app(&head, new);
		lst = lst->next;
	}
	return (head);
}

