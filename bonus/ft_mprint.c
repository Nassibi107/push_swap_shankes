/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:23:58 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 09:43:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"


void	ft_mprint(t_stack **sa, t_stack **sb)
{
	if ((is_lstsort(sa) && !ft_lstsize_bonus(*sb)))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
