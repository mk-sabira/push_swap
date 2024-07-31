/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:53:42 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/31 11:53:53 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_swap(t_stack **stack)
{
	int	temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	temp = (*stack)->nb;
	(*stack)->nb = (*stack)->next->nb;
	(*stack)->next->nb = temp;
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
}

void	ft_sb(t_stack **stack_b)
{
	ft_swap(stack_b);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
