/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:54:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:51:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

void	ft_sort3(t_stack **sa)
{
	if (get_lstsize(*sa) == 2 || get_lstsize(*sa) == 1)
	{
		if (get_lstsize(*sa) == 2
			&& (*sa)->value > (*sa)->next->value)
			ft_lstswap(sa, 1);
		exit(0);
	}
	if (get_lstmax(*sa) == 1 && get_lstmin(*sa) == 2)
		rotate(sa, 1);
	if (get_lstmax(*sa) == 1 && get_lstmin(*sa) == 3)
	{
		ft_lstswap(sa, 1);
		rrotate(sa, 1);
	}
	if (get_lstmin(*sa) == 2)
		ft_lstswap(sa, 1);
	if (get_lstmin(*sa) == 3)
		rrotate(sa, 1);
	if (get_lstmax(*sa) == 2 && get_lstmin(*sa) == 1)
	{
		ft_lstswap(sa, 1);
		rotate(sa, 1);
	}
}
