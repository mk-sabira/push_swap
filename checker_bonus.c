/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:12:59 by bmakhama          #+#    #+#             */
/*   Updated: 2024/07/31 14:03:37 by bmakhama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_apply_rest(t_stack **stack_a, t_stack **stack_b, char *get_op)
{
	if (get_op[2] == 'a')
		ft_rra(stack_a);
	else if (get_op[2] == 'b')
		ft_rrb(stack_b);
	else if (get_op[2] == 'r')
		ft_rrr(stack_a, stack_b);
}

int	execute_operation(t_stack **stack_a, t_stack **stack_b, char *get_op)
{
	if (get_op[0] == 's' && get_op[1] == 'a' && get_op[2] == '\n')
		ft_sa(stack_a);
	else if (get_op[0] == 's' && get_op[1] == 'b' && get_op[2] == '\n')
		ft_sb(stack_b);
	else if (get_op[0] == 's' && get_op[1] == 's' && get_op[2] == '\n')
		ft_ss(stack_a, stack_b);
	else if (get_op[0] == 'r' && get_op[1] == 'a' && get_op[2] == '\n')
		ft_ra(stack_a);
	else if (get_op[0] == 'r' && get_op[1] == 'b' && get_op[2] == '\n')
		ft_rb(stack_b);
	else if (get_op[0] == 'r' && get_op[1] == 'r' && get_op[2] == '\n')
		ft_rr(stack_a, stack_b);
	else if (get_op[0] == 'p' && get_op[1] == 'a' && get_op[2] == '\n')
		ft_pa(stack_b, stack_a);
	else if (get_op[0] == 'p' && get_op[1] == 'b' && get_op[2] == '\n')
		ft_pb(stack_a, stack_b);
	else if (get_op[0] == 'r' && get_op[1] == 'r' && get_op[3] == '\n')
		ft_apply_rest(stack_a, stack_b, get_op);
	else
		return (1);
	return (0);
}

int	ft_apply_oper(t_stack **stack_a, t_stack **stack_b, char *get_op)
{
	int	result;

	result = execute_operation(stack_a, stack_b, get_op);
	if (result == 1)
	{
		write(1, "KO\n", 3);
		free_stack(stack_a);
		free_stack(stack_b);
		return (2);
	}
	return (0);
}

int	ft_read_oper(t_stack **stack_a, t_stack **stack_b, char *get_op)
{
	int	result;

	while (get_op)
	{
		result = ft_apply_oper(stack_a, stack_b, get_op);
		if (result != 0)
		{
			free(get_op);
			get_op = NULL;
			return (result);
		}
		free(get_op);
		get_op = get_next_line(0, 0);
	}
	if (!sorted_stack(*stack_a))
		write (1, "KO\n", 3);
	else if (*stack_b)
	{
		write (1, "KO\n", 3);
		free_stack(stack_b);
	}
	else
		write (1, "OK\n", 3);
	return (0);
}

int	main(int arc, char **arv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*read_op;
	int		result;

	stack_a = NULL;
	stack_b = NULL;
	if (arc > 1)
	{
		valid_and_init(arc, arv, &stack_a);
		read_op = get_next_line(0, 0);
		if (!read_op && sorted_stack(stack_a))
			write(1, "OK\n", 3);
		else if (!read_op && !(sorted_stack(stack_a)))
			write(1, "KO\n", 3);
		else
		{
			result = ft_read_oper(&stack_a, &stack_b, read_op);
			if (result == 1)
				return (0);
			else if (result == 2)
				return (get_next_line(0, 1), 1);
		}
	}
	return (free_stack(&stack_a), 0);
}
