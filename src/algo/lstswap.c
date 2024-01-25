/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstswap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:58:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"
void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_putendl_fd("ss", 1);
	ft_lstswap(stack_a, 2);
	ft_lstswap(stack_b, 2);
}

void	ft_lstswap(t_stack **head, int flag)
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
