/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lst_pos_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:17:16 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:18:20 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_stack_bs	*get_lst_pos_bonus(t_stack_bs *head, int a)
{
	t_stack_bs	*tmp;
	int		i;

	tmp = head;
	i = 1;
	while (i < a)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
