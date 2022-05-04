/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:24:50 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/04 13:42:40 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_idi(int i)
{
	return (i);
}

void	ft_nodeli(int i)
{
	int	n;

	n = i;
	return ;
}

void	ft_lidelone(t_li *li, void (*del)(int))
{
	if (!li)
		return ;
	if (del)
		(*del)(li->val);
	free(li);
}

void	ft_liclear(t_li **li, void (*del)(int))
{
	t_li	*tmp;

	if (!li || !del)
		return ;
	while (*li)
	{
		tmp = (*li)->next;
		ft_lidelone(*li, del);
		*li = tmp;
	}
}

t_li	*ft_licpy(t_li *orig)
{
	return (ft_limap(orig, ft_idi, ft_nodeli));
}
