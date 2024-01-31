/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:22:48 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:02:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rrotate_bonus(t_stack **head, int flag)
{
	t_stack	*p;
	t_stack	*tmp1;
	t_stack	*tmp;
	int		index;

	if (flag == 1 || flag == 0 || flag == 2)
	{
		p = *head;
		tmp = ft_last(p);
		index = get_lstsize(p);
		tmp1 = get_lst_pos(p, index - 1);
		tmp->next = p;
		tmp1->next = NULL;
		*head = tmp;
	}
}
