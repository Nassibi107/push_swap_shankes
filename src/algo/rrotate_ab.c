/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:13:18 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 18:13:58 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	rrotate_ab(t_stack **sa, t_stack **sb)
{
	ft_putendl_fd("rrr",1);
	rrotate(sa, 2);
	rrotate(sb, 2);
}
