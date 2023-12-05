/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtoure <gtoure@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:02:23 by gtoure            #+#    #+#             */
/*   Updated: 2023/12/05 18:29:52 by gtoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

typedef struct s_push_swap
{
	int		*array;
	size_t	size;
}	t_stack;

void	swap(t_stack *stack);
void	push(t_stack *from, t_stack *to);
void	rotate(t_stack *stack);
void	ReverseRotate(t_stack *stack);
void	InitialisizeStack(t_stack *stack, int *values, size_t size);
void	PrintStack(t_stack *stack);
#endif
