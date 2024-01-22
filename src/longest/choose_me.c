/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_me.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:07:18 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/22 16:02:45 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

static void	ft_up(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			rrotate(sa, 'a');
			rrotate(sb, 'b');

			best->mv = best->mv - 1;
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rrotate(sb, 'b');
			best->mv = best->mv - 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
			rrotate(sa, 'a');
			best->hook->mv = best->hook->mv - 1;
		}
	}
}

static void	ft_down(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv != 0 && best->hook->mv != 0)
		{
			rotate(sa, 'a');
			rotate(sb, 'b');
			best->mv = best->mv + 1;
			best->hook->mv = best->hook->mv + 1;
		}
		else if (best->mv != 0 && best->hook->mv == 0)
		{
			rotate(sb, 'b');
			best->mv = best->mv + 1;
		}
		else if (best->mv == 0 && best->hook->mv != 0)
		{
			rotate(sa, 'a');
			best->hook->mv = best->hook->mv + 1;
		}
	}
}


void	ft_down_up(t_stack **sa, t_stack **sb, t_stack *best)
{
	while (best->mv != 0 || best->hook->mv != 0)
	{
		if (best->mv > 0)
		{
			rotate(sb, 'b');
			best->mv = best->mv - 1;
		}
		else if (best->mv < 0)
		{
			rrotate(sb, 'b');
			best->mv = best->mv + 1;
		}
		if (best->hook->mv > 0)
		{
			rotate(sa, 'a');
			best->hook->mv = best->hook->mv - 1;
		}
		else if (best->hook->mv < 0)
		{
			rrotate(sa, 'a');
			best->hook->mv = best->hook->mv + 1;
		}
	}
}


void	choose_me(t_stack *best,t_stack **sa,t_stack **sb)
{
   while(best != *sb || best->hook != *sa)
   {
      if ( best->mv == 0 && best->hook->mv == 0)
         break;
      if (best->mv < 1 && best->hook->mv < 1)
         ft_down(sa,sb,best);
      else if (best->mv >= 1 && best->hook->mv >= 1 )
         ft_up(sa,sb,best);
      else
         ft_down_up(sa,sb,best);
   }
}
