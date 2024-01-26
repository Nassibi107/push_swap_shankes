/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundler_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:43:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 10:54:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_push_to_sa(t_stack **sb, t_stack **sa, t_stack *jk)
{
	while (*sb != jk || *sa != jk->hook)
	{
		if (jk->mv == 0 && jk->hook->mv == 0)
			break ;
		if (jk->mv < 1 && jk->hook->mv < 1)
			ft_down(sa, sb, jk);
		else if (jk->mv >= 1 && jk->hook->mv >= 1)
			ft_up(sa, sb, jk);
		else
			ft_down_up(sa, sb, jk);
	}
}

void	ft_min_moves(t_stack **sa, t_stack **sb)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	tmp = *sb;
	i = 2147483647;
	while (tmp)
	{
		if (i > (tmp->mv + tmp->hook->mv))
		{
			i = (tmp->mv + tmp->hook->mv);
			tmp1 = tmp;
		}
		tmp = tmp->next;
	}
	if (get_lst_id(sb, tmp1->value) >= get_lstsize(*sb) / 2)
		tmp1->mv = (tmp1->mv) * -1;
	if (get_lst_id(sa, tmp1->hook->value) >= get_lstsize(*sa) / 2)
		tmp1->hook->mv = tmp1->hook->mv * -1;
	ft_push_to_sa(sb, sa, tmp1);
}



void	hundler_moves(t_stack **sb, t_stack **sa)
{
	t_stack	*tmp;
	int		size;
	int		size1;
	int		index;
	int		index1;

	tmp = *sb;
	while (tmp)
	{
		size = get_lstsize(*sa);
		size1 = get_lstsize(*sb);
		index = get_lst_id(sa, tmp->hook->value);
		index1 = get_lst_id(sb, tmp->value);
		if (index < size / 2)
			tmp->hook->mv = index;
		else if (index >= size / 2)
			tmp->hook->mv = size - index;
		if (index1 < size1 / 2)
			tmp->mv = index1;
		else if (index1 >= size1 / 2)
			tmp->mv = size1 - index1;
		tmp = tmp->next;
	}
}
