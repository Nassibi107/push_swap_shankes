/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:42:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 15:49:20 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	agg(t_stack_bs **head, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strncmp((*head)->value, "ss", 2)))
		ft_swap_ab_bonus(stack_a, stack_b);
	else if (!(ft_strncmp((*head)->value, "ra", 2)))
		ft_rotate_bonus(stack_a, 1);
	else if (!(ft_strncmp((*head)->value, "rb", 2)))
		ft_rotate_bonus(stack_a, 2);
	else if (!(ft_strncmp((*head)->value, "rr", 2)))
		ft_rotate_ab_bonus(stack_a, stack_b);
	else if (!(ft_strncmp((*head)->value, "pb", 2)))
		fpush(stack_a, stack_b);
	else if ((!ft_strncmp((*head)->value, "pa", 2)))
		fpush(stack_b, stack_a);
}
