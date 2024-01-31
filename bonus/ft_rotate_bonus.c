/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:18:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 17:13:45 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rotate_bonus(t_stack **head, int flag)
{
	t_stack	*last;
	t_stack	*tmp;

	if (flag == 1 || flag == 0 || flag == 2)
	{
		tmp = (*head)->next;
		last = ft_lstlast_bonus(*head);
		last->next = *head;
		(*head)->next = NULL;
		*head = tmp;
	}
}
