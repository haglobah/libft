/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iq2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhagenlo <bhagenlo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:37:10 by bhagenlo          #+#    #+#             */
/*   Updated: 2022/05/06 13:06:55 by bhagenlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_iqenq(t_iq *queue, int item)
{
	if (ft_iqisfull(queue))
		return ;
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->arr[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d enqueued to queue\n", item);
}

int	ft_iqdeq(t_iq *queue)
{
	int	item;

	if (ft_iqismt(queue))
		return (INT_MIN);
	item = queue->arr[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return (item);
}

int	ft_iqfront(t_iq *queue)
{
	if (ft_iqismt(queue))
		return (INT_MIN);
	return (queue->arr[queue->front]);
}

int	ft_iqrear(t_iq *queue)
{
	if (ft_iqismt(queue))
		return (INT_MIN);
	return (queue->arr[queue->rear]);
}
