/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:24:50 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 11:25:10 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_idi(int i)
{
	return (i);
}

void	ft_nodeli(int i)
{
	return ;
}

void	ft_lidelone(t_li *li, void (*del)(int))
{
	if (!lst)
		return ;
	if (del)
		(*del)(lst->val);
	free(lst);
}

void	ft_liclear(t_li **li, void (*del)(int))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lidelone(*lst, del);
		*lst = tmp;
	}
}

t_li	*ft_licpy(t_li *orig)
{
	return (ft_limap(orig, ft_idi, ft_nodeli));
}
