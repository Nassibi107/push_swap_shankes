/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:29:49 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 11:56:25 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	get_rst(char **str, t_stack **sb, t_stack **sa)
{
	agg(str, sb, sa);
	if (is_lstsort_bonus(sa) == 1 && !(*sb))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}
