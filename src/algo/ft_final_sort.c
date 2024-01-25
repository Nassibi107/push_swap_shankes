/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:01:52 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:51:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_final_sort(t_stack **stack_a)
{
	int	a;

	a = get_lstmin(*stack_a);
	while (ft_index(stack_a, (*stack_a)->value) != get_lstmin(*stack_a)
		- 1)
	{
		if (a < get_lstsize(*stack_a) / 2)
			rotate(stack_a, 1);
		else
			rrotate(stack_a, 1);
	}
}
