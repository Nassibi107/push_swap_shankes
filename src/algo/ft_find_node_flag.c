/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:16:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:27 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

int	ft_find_node_flag(t_stack **head)
{
	t_stack	*tmp;
	int		i;

	tmp = *head;
	i = 1;
	while (tmp->next)
	{
		if (tmp->sub == 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
