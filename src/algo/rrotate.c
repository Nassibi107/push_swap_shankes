/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:50:16 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:54 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "algo.h"

void	ft_rrr(t_stack **sa, t_stack **sb)
{
	ft_putendl_fd("rrr",1);
	rrotate(sa, 2);
	rrotate(sb, 2);
}

void	rrotate(t_stack **head, int flag)
{
	t_stack	*p;
	t_stack	*tmp1;
	t_stack	*tmp;
	int		index;

	if (flag == 1)
		ft_putendl_fd("rra",1);
	else if (flag == 0)
		ft_putendl_fd("rrb",1);
	p = *head;
	tmp = ft_last(p);
	index = get_lstsize(p);
	tmp1 = ft_find_node(p, index - 1);
	tmp->next = p;
	tmp1->next = NULL;
	*head = tmp;
}
