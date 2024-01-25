/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:52:14 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/25 18:18:07 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		swap(stack_a);
	if (*stack_b)
		swap(stack_b);
}

void	swap(t_list **head)
{
	t_list	*tmp;

	if (ft_lstsize(*head) == 1 || !(*head))
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}
