/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forward.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:19:21 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:59:52 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	ft_down(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			ft_rrr(sb, sa);
			best->mv = best->mv + 1;
			best->hook->mv = best->hook->mv + 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rrotate(sb, 0);
			best->mv = best->mv + 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
			rrotate(sa, 1);
			best->hook->mv = best->hook->mv + 1;
		}
	}
}

void	ft_up(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			ft_rr(sb, sa);
			best->mv = best->mv - 1;
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rotate(sb, 0);
			best->mv = best->mv - 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
			rotate(sa, 1);
			best->hook->mv = best->hook->mv - 1;
		}
	}
}

void	ft_down_up(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv > 0)
		{
			rotate(sb, 0);
			best->mv = best->mv - 1;
		}
		else if (best->mv < 0)
		{
			rrotate(sb, 0);
			best->mv = best->mv + 1;
		}
		if (best->hook->mv > 0)
		{
			rotate(sa, 1);
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->hook->mv < 0)
		{
			rrotate(sa, 1);
			best->hook->mv = best->hook->mv + 1;
		}
	}
}
