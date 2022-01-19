/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils_reverse_rotate.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roaraujo <roaraujo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:45:47 by roaraujo          #+#    #+#             */
/*   Updated: 2022/01/19 20:46:09 by roaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stacks *stacks)
{
	t_dbl_list_i	*detach;

	if (stacks->size_a <= 1 || stacks->stack_a == NULL)
		return ;
	detach = ft_dbl_lst_i_last(stacks->stack_a);
	if (detach->prev)
		(detach->prev)->next = NULL;
	ft_dbl_lst_i_add_front(&stacks->stack_a, detach);
	ft_putendl_fd("rra", 1);
	return ;
}

void	reverse_rotate_b(t_stacks *stacks)
{
	t_dbl_list_i	*detach;

	if (stacks->size_b <= 1 || stacks->stack_b == NULL)
		return ;
	detach = ft_dbl_lst_i_last(stacks->stack_b);
	if (detach->prev)
		(detach->prev)->next = NULL;
	ft_dbl_lst_i_add_front(&stacks->stack_b, detach);
	ft_putendl_fd("rrb", 1);
	return ;
}

void	reverse_rotate_ab(t_stacks *stacks)
{
	t_dbl_list_i	*detach;

	if (stacks->size_a <= 1 || stacks->stack_a == NULL)
		return ;
	detach = ft_dbl_lst_i_last(stacks->stack_a);
	if (detach->prev)
		(detach->prev)->next = NULL;
	ft_dbl_lst_i_add_front(&stacks->stack_a, detach);
	if (stacks->size_b <= 1 || stacks->stack_b == NULL)
		return ;
	detach = ft_dbl_lst_i_last(stacks->stack_b);
	if (detach->prev)
		(detach->prev)->next = NULL;
	ft_dbl_lst_i_add_front(&stacks->stack_b, detach);
	ft_putendl_fd("rrr", 1);
	return ;
}
