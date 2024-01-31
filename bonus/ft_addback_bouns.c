/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addback_bouns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:36:18 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 09:45:52 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"


void	ft_add_back(t_stack **sa, char *s)
{
	t_stack	*tmp;

	tmp = *sa;
	if (!sa)
		return ;
	if (!(*sa) || !sa)
		*sa = ft_lastnew_bonus(s);
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_lastnew_bonus(s);
	}
}
