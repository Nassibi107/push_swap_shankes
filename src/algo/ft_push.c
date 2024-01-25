/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:47:04 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:49:17 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_optimized(t_stack **stack)
{
	int	average;

	average = ft_find_node(*stack, get_lstmin(*stack))->value;
	average += ft_find_node(*stack, get_lstmax(*stack))->value;
	if ((*stack)->value > average / 2)
		rotate(stack, 0);
}

void	ft_push(t_stack **src, t_stack **dest, int flag)
{
	t_stack	*new;

	new = (*src);
	(*src) = (*src)->next;
	ft_lstadd_front_s(dest, new);
	if (flag == 1)
		write(1, "pa\n", 3);
	else if (flag == 0)
	{
		write(1, "pb\n", 3);
		if (get_lstsize(*src) > 5)
			ft_optimized(dest);
	}
}
