/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iq1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:36:12 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/06 12:36:12 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

t_iq	*ft_mkiq(unsigned int capacity)
{
	t_iq	*queue;

	queue = (t_iq *)malloc(sizeof(t_iq));
	queue->capacity = capacity;
	queue->front = 0;
	queue->size = 0;
	queue->rear = capacity - 1;
	queue->arr = (int *)malloc(queue->capacity * sizeof(int));
	return (queue);
}

//TODO
void	ft_deliq(t_iq *queue)
{
}

int	ft_iqisfull(t_iq *queue)
{
	return (queue->size == queue->capacity);
}

int	ft_iqismt(t_iq *queue)
{
	return (queue->size == 0);
}
