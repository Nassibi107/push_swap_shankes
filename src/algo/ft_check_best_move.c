/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_jk_move.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:39:02 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:59:52 by ynassibi         ###   ########.fr       */
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
	if (ft_index(sb, tmp1->value) >= get_lstsize(*sb) / 2)
		tmp1->mv = (tmp1->mv) * -1;
	if (ft_index(sa, tmp1->hook->value) >= get_lstsize(*sa) / 2)
		tmp1->hook->mv = tmp1->hook->mv * -1;
	ft_push_to_sa(sb, sa, tmp1);
}

int	ft_index(t_stack **stack, int a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == a)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	ft_check_jk_move(t_stack **sb, t_stack **sa)
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
		index = ft_index(sa, tmp->hook->value);
		index1 = ft_index(sb, tmp->value);
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
