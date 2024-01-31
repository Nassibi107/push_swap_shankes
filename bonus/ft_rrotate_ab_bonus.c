/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_ab_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:20:21 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:53:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rrotate_ab_bonus(t_stack **sa, t_stack **sb)
{
	ft_rrotate_bonus(sa, 2);
	ft_rrotate_bonus(sb, 2);
}
