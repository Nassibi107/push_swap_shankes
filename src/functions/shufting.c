/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shufting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:03:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 11:26:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"

void	shufting(t_stack **sa, t_stack **sb)
{
	int	s_all;
	int	*arr_sq;

	s_all = ((get_lstsize(*sa) + 1) * 4);
	arr_sq = malloc(s_all);
	if (!arr_sq)
		return ;
	ft_sub(sa, &arr_sq);
	ft_push_flag(sa, sb);
	while (get_lstsize(*sb))
	{
		ft_set_target(sa, sb);
		hundler_moves(sb, sa);
		ft_min_moves(sa, sb);
		ft_push(sb, sa, 1);
	}
	free(arr_sq);

}