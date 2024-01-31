/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ab_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:25:30 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:53:34 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_rotate_ab_bonus(t_stack **sa, t_stack **sb)
{
	ft_rotate_bonus(sa, 2);
	ft_rotate_bonus(sb, 2);
}
