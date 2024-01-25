/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:21:50 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:19 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_big_sort(t_stack **sa, t_stack **sb)
{
	int	*subsequence_arr;
	int	i;

	subsequence_arr = malloc((get_lstsize(*sa) + 1) * sizeof(int));
	if (!subsequence_arr)
		return ;
	ft_subsequence_search(sa, &subsequence_arr);
	ft_push_flag(sa, sb);
	i = get_lstsize(*sb);
	while (i > 0)
	{
		ft_set_target(sa, sb);
		ft_check_best_move(sb, sa);
		ft_min_moves(sa, sb);
		ft_push(sb, sa, 1);
		i--;
	}
	free(subsequence_arr);
	ft_final_sort(sa);
}
