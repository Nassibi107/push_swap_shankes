/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_err.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:36:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 14:11:42 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static void	ft_lstclear_bonus(t_stack **sa, void (*f)(void *))
{
	t_stack	*current;

	while (*sa)
	{
		current = (*sa)->next;
		f(*sa);
		*sa = current;
	}
}

static void	ft_lst_srtclear(t_stack_bs **str, void (*f)(void *))
{
	t_stack_bs	*current;

	while (*str)
	{
		current = (*str)->next;
		f(*str);
		f((*str)->value);
		*str = current;
	}
}

void	r_err(t_stack **sa, t_stack **sb, t_stack_bs **str)
{
	if (*sa)
		ft_lstclear_bonus(sa, free);
	if (*sb)
		ft_lstclear_bonus(sb, free);
	if (*str)
		ft_lst_srtclear(str, free);
	ft_putendl_fd("Error\n", 1);
	exit(1);
}
