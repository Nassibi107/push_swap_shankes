/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:57:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:11 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_sub(t_stack **stack_a, int **ar)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = get_lstmin(*stack_a);
	while (i++ < s)
		ar[0][i] = 1;
	i = 1;
	while (s > 1)
	{
		j = 0;
		while (j < i)
		{
			if ((get_lst_pos(*stack_a, i
						+ 1)->value) > (get_lst_pos(*stack_a, j
						+ 1)->value) && ar[0][j] + 1 > ar[0][i])
			{
				ar[0][i] = ar[0][j] + 1;
			}
			j++;
		}
		i++;
		s--;
	}
	ft_setflag(stack_a, ar, get_lstsize(*stack_a));
}
