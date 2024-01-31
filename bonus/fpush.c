/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpush.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:48:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 14:48:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	fpush(t_stack **st1, t_stack **st2)
{
	t_stack	*new;

	if ((!*st1))
		return ;
	new = (*st1);
	(*st1) = (*st1)->next;
	ft_lstadd_front_s(st2, new);
}
