/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:47:55 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 17:31:16 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

static void swap_a(t_stack **head)
{
	t_stack *swp;
	swp = (*head)->next;
	(*head)->next = swp->next;
	swp->next = *head;
	(*head) = swp;
	ft_putendl_fd("sa", 1);
}
static void swap_b(t_stack **head)
{
	t_stack *swp;
	swp = *head;
	*head = (*head)->next;
	*head = swp;
	ft_putendl_fd("sa", 1);
}
void swap(t_stack **head,char flag)
{
	if (flag == 'a')
		swap_a(head);
	else if (flag == 'b')
		swap_b(head);
	else if (flag == 's')
		{
			swap_a(head);
			swap_b(head);
		}
}
