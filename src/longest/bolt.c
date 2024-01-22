/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bolt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:22 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/22 15:59:48 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"


static void ft_get_bestmv(t_stack **sb,t_stack **sa)
{
	t_stack *tmp_sb = *sb;
	t_stack *tmp = *sb;
	int size_a;
	int size_b;

	size_a = get_lstsize(*sa) / 2;
	size_b = get_lstsize(*sb) / 2;
	int vtmp = tmp_sb->mv + tmp_sb->hook->mv;
	while (tmp_sb)
	{
		if ((tmp_sb->mv + tmp_sb->hook->mv)  < vtmp)
		{
				vtmp  = tmp_sb->mv + tmp_sb->hook->mv;
				tmp = tmp_sb;
		}
		tmp_sb = tmp_sb->next;
	}
	if (tmp->pos >=  size_b)
		tmp->mv *= -1;
	if (tmp->hook->pos >=  size_a)
		tmp->hook->mv *= -1;
	choose_me(tmp,sa,sb);
}

static void ft_count_move(t_stack *sa ,int size)
{

	if (sa->pos >= (size / 2))
			sa->mv = size - sa->pos;
	else
			sa->mv = sa->pos;
}

void bolt(t_stack *sb ,t_stack *sa )
{
	int size = get_lstsize(sb);
 	int size_a = get_lstsize(sa);
	t_stack *tmp = sb;
	while (tmp)
	{
		if (tmp->pos >= (size / 2))
			tmp->mv = size - tmp->pos;

		else
			tmp->mv = tmp->pos;
		ft_count_move(tmp->hook,size_a);
		tmp = tmp->next;
	}
	ft_get_bestmv(&sb,&sa);
}
