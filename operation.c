/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtoure <gtoure@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:51:52 by gtoure            #+#    #+#             */
/*   Updated: 2023/12/05 18:29:52 by gtoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack ->size >= 2)
	{
		temp = stack->array[0];
		stack ->array[0] = stack ->array[1];
		stack ->array[1] = temp;
	}
}

void	push(t_stack *from, t_stack *to)
{
	if (from ->size > 0)
		to ->array[to ->size++] = from ->array[--from ->size];
}

void	rotate(t_stack *stack)
{
	int temp;
	size_t i;

	i = 0;
	if (stack ->size > 1)
	{
		temp = stack ->array[0];
		while (i < stack ->size - 1)
		{
			stack ->array[i] = stack ->array[i + 1]; 
			i++;
		}
		stack ->array[stack ->size -1] = temp;
	}
}

void	ReverseRotate(t_stack *stack)
{
	int temp;
	size_t i;

	i = stack ->size - 1;
	if (stack ->size > 1)
	{
		temp = stack ->array[0];
		while (i > 0)
		{
			stack ->array[i] = stack ->array[i - 1];
			--i;
		}
		stack ->array[0] = temp;
	}	
}
