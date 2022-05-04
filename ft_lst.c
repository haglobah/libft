/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:31:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 13:39:35 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_id(void *el)
{
	return (el);
}

void	ft_nodel(void *el)
{
	void	*vp;

	vp = el;
	return ;
}

int	ft_lstlen(t_list *lst)
{
	return (ft_lstsize(lst));
}

void	ft_lstcpy(t_list *orig, t_list **place)
{
	*place = ft_lstmap(orig, ft_id, ft_nodel);
}
