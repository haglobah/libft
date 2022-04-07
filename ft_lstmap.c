/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:18:29 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/04/04 12:18:29 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		llen;
	t_list	*new_lst;
	t_list	*tmp_el;
	t_list	*res;

	llen = ft_lstsize(lst);
	new_lst = (t_list *)malloc(sizeof(t_list) * (llen + 1));
	if (!new_lst)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	res = new_lst;
	while (lst)
	{
		new_lst->content = f(lst->content);
		tmp_el = new_lst + 1;
		new_lst->next = tmp_el;
		new_lst++;
		lst = lst->next;
	}
	return (res);
}
