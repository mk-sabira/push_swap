/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:43:03 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/26 10:44:03 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **stack_a, t_stack **stack_b, t_data	*data)
{
	data->size_a = ft_count_size(*stack_a);
	data->size_b = ft_count_size(*stack_b);
	while (!do_rot_sort(stack_a, data, 0) && data->size_a > 3)
	{
		data->max_b = max_nb(*stack_b);
		data->min_b = min_nb(*stack_b);
		if (data->size_b >= 2)
		{
			total_move(*stack_a, *stack_b, &data);
			cheap_pb(stack_a, stack_b, &data);
		}
		if (data->size_b < 2)
			ft_pb(stack_a, stack_b);
		data->size_a--;
		data->size_b++;
	}
}

int	cheap_pa(t_stack *stack_a, int nb_b, t_data *data)
{
	int	i;

	i = 0;
	if (nb_b > max_nb(stack_a) || nb_b < min_nb(stack_a))
	{
		while (stack_a->nb != min_nb(stack_a))
		{
			stack_a = stack_a->next;
			i++;
		}
	}
	else
	{
		while (!(nb_b < stack_a->nb && nb_b > stack_a->prev->nb))
		{
			stack_a = stack_a->next;
			i++;
		}
	}
	if (i <= data->size_a / 2)
		return (i);
	else
		return (-data->size_a + i);
}

void	push_to_a(t_stack **stack_a, t_stack **stack_b, t_data **data)
{
	int	i;

	while ((*data)->size_b)
	{
		i = cheap_pa(*stack_a, (*stack_b)->nb, *data);
		if (i > 0)
		{
			while (i--)
				ft_ra(stack_a);
		}
		else
		{
			while (i++)
				ft_rra(stack_a);
		}
		ft_pa(stack_b, stack_a);
		(*data)->size_b--;
		(*data)->size_a++;
	}
}

void	ft_rotate_sort(t_stack **stack)
{
	t_stack	*current;
	t_stack	*start;

	current = *stack;
	start = *stack;
	while (current->next != start)
	{
		ft_rra(stack);
		if (sorted_stack(*stack))
			break ;
		current = current->next;
		if (current == start)
			break ;
	}
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	push_to_b(stack_a, stack_b, data);
	if (!sorted_stack(*stack_a))
		sort_three(stack_a);
	push_to_a(stack_a, stack_b, &data);
	do_rot_sort(stack_a, data, 1);
	free (data);
}
