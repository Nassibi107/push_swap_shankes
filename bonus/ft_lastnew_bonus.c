/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastnew_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:34:42 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:03:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_stack_bs	*ft_lastnew_bonus(char *value)
{
	t_stack_bs	*p;

	p = (t_stack_bs *)malloc(sizeof(t_stack_bs));
	if (!p)
		return (NULL);
	p->value = value;
	p->next = NULL;
	return (p);
}
