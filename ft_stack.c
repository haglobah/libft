/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:31:18 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/30 18:09:41 by bhagenlo         ###   ########.fr       */
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

void	ft_pushi(t_li **stack, t_li *elem)
{
	ft_li_prep(stack, elem);
}

int	ft_peeki(t_li **stack)
{
	if ((*stack) == NULL)
		return (123456789);
	return ((*stack)->val);
}

int	ft_popi(t_li **stack)
{
	int		val;
	t_li	*head;

	if (*stack == NULL)
		return (123456789);
	head = *stack;
	val = (*stack)->val;
	(*stack) = (*stack)->next;
	ft_lidelone(head, ft_nodeli);
	return (val);
}
