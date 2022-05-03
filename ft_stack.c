/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:31:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/03 11:31:18 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_push1(t_list **stack, void *elem)
{
	ft_lstadd_front(stack, elem);
}

t_list	*ft_pop1(t_list **stack)
{
	t_list	*ret;
	t_list	*head;

	head = *stack;
	ret = head;
	head = head->next;
	return (ret);
}
