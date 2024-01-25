/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:16:33 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:30 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

t_stack	*ft_find_node(t_stack *head, int a)
{
	t_stack	*tmp;
	int		i;

	tmp = head;
	i = 1;
	while (i < a)
	{
		if (tmp->next)
			tmp = tmp->next;
		i++;
	}
	return (tmp);
}
