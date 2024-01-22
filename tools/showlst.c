/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:37:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/22 14:42:33 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	showlst(t_stack *head)
{
	while (head)
	{
		printf("\033[0;94m%d\e[0m",head->value);
		printf("\e[38;5;118m  :[%p]\e[0m\t",head);
		printf("\033[0;93m  pos:[%d]\e[0m\t",head->pos);
		printf("\033[0;96m   sub:[%d]\e[0m\t",head->sub);
		if(head->hook)
			printf("\033[0;95m   hook:[%d]\e[0m\t",head->hook->value);
		printf("\033[0;90m   moves:[%d]\e[0m\t\n",head->mv);
		head = head->next;
	}
}
