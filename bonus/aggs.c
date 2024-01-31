/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aggs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:51:17 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:40:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	aggs(t_stack_bs **head, t_stack **stack_a, t_stack **stack_b)
{
	t_stack_bs	*tmp;

	tmp = *head;
	while (*head)
	{
		if (ft_strncmp((*head)->value, "sa", 2) == 0)
			ft_swap_bonus(stack_a,1);
		else if (ft_strncmp((*head)->value, "rra", 3) == 0)
			ft_rrotate_bonus(stack_a, 1);
		else if (ft_strncmp((*head)->value, "rrb", 3) == 0)
			ft_rrotate_bonus(stack_b, 0);
		else if (ft_strncmp((*head)->value, "rrr", 3) == 0)
			ft_rrotate_ab_bonus(stack_a, stack_b);
		else if (ft_strncmp((*head)->value, "sb", 2) == 0)
			ft_swap_bonus(stack_b, 2);
		else
			agg(head, stack_a, stack_b);
		(*head) = (*head)->next;
	}
	*head = tmp;
	ft_mprint(stack_a, stack_b);
}
