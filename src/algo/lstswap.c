/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:58:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 18:18:07 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	swap(t_stack **head, int flag)
{
	t_stack	*tmp;

	if (flag == 1)
		ft_putendl_fd("sa", 1);
	else if (flag == 0)
		ft_putendl_fd("sb", 1);
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}
