/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:45:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:51:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

static void	helper(t_stack **sa, t_stack **sb)
{
	while ((*sa)->sub != 0)
		rrotate(sa, 1);
	ft_push(sa, sb, 0);
}

void	ft_push_flag(t_stack **sa, t_stack **sb)
{
	int	size;
	int	i;

	size = get_lstsize(*sa);
	while (1)
	{
		i = ft_find_node_flag(sa);
		if (i == 0)
			break ;
		if (i > (size / 2))
			helper(sa, sb);
		else
		{
			if (i != 1)
			{
				while ((*sa)->hook != 0)
					rotate(sa, 1);
			}
			ft_push(sa, sb, 0);
		}
	}
}
