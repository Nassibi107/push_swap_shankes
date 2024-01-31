/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ab_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:32:14 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 15:59:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_swap_ab_bonus(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_bonus(stack_a, 2);
	ft_swap_bonus(stack_b, 2);
}

