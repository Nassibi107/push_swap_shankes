/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:59:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 18:15:03 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	ft_up(t_stack **sa, t_stack **sb, t_stack *jk)
{
	while (jk->mv != 0 || jk->hook->mv != 0)
	{
		if (jk->mv != 0 && jk->hook->mv != 0)
		{
			rotate_ab(sb, sa);
			jk->mv = jk->mv - 1;
			jk->hook->mv = jk->hook->mv - 1;
		}
		else if (jk->mv != 0 && jk->hook->mv == 0)
		{
			rotate(sb, 0);
			jk->mv = jk->mv - 1;
		}
		else if (jk->mv == 0 && jk->hook->mv != 0)
		{
			rotate(sa, 1);
			jk->hook->mv = jk->hook->mv - 1;
		}
	}
}
