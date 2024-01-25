/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:52:08 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:58 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

t_stack	*ft_find_target(int a, t_stack **sa)
{
	t_stack	*p;
	t_stack	*tar;

	tar = NULL;
	p = *sa;
	while (p)
	{
		if (p->value > a && (tar == NULL || tar->value > p->value))
			tar = p;
		p = p->next;
	}
	return (tar);
}

void	ft_set_target(t_stack **sa, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	while (tmp)
	{
		tmp->hook = ft_find_target(tmp->value, sa);
		if (tmp->hook == NULL)
			tmp->hook = ft_find_node(*sa, get_lstmin(*sa));
		tmp = tmp->next;
	}
}
