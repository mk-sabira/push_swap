/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:54:23 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/31 11:54:25 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_reverse_rotate(t_stack **stack)
{
	if (*stack == NULL || (*stack)->next == *stack)
		return ;
	*stack = (*stack)->prev;
}

void	ft_rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
}

void	ft_rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}
