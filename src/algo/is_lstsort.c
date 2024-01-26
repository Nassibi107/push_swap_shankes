/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 11:38:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

int	is_lstsort(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	tmp = *stack_a;
	tmp1 = (*stack_a)->next;
	i = 1;
	while (tmp1)
	{
		if (tmp1->value < tmp->value)
			i = 0;
		tmp = tmp->next;
		tmp1 = tmp1->next;
	}
	return (i);
}
