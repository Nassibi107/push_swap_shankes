/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:35 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

void	ft_lstadd_front_s(t_stack **head, t_stack *new)
{
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
}
