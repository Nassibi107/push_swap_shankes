/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:57:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:51:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"
static void	helper1(t_stack **sa, t_stack *p)
{
	while ((*sa)->value != p->value)
		rrotate(sa, 1);
}

void	ft_sort4(t_stack **sa, t_stack **sb)
{
	int		i;
	int		j;
	int		min_pos;
	t_stack	*p;

	i = 1;
	if (get_lstsize(*sa) == 5)
		i = 2;
	j = i;
	while (i-- > 0)
	{
		min_pos = get_lstmin(*sa);
		p = ft_find_node(*sa, min_pos);
		if (min_pos > 2)
			helper1(sa, p);
		else
			while ((*sa)->value != p->value)
				rotate(sa, 1);
		ft_push(sa, sb, 0);
	}
	ft_sort3(sa);
	ft_push(sb, sa, 1);
	if (j == 2)
		ft_push(sb, sa, 1);
}
