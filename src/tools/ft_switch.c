/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:30:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 18:07:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_switch(t_stack *sa, t_stack *sb)
{
	int	len;

	len = get_lstsize(sa);
	if (len <= 3)
		ft_sort3(&sa);
	else if (len <= 5)
	{
		ft_sort4(&sa,&sb);
	}
	else if (len > 5)
	{
		shufting(&sa,&sb);
		ft_final_sort(&sa);
	}
	// printf("\033[0;93m---------stack a------\n\033[0m");
	// showlst(sa);
	// printf("\033[0;93m---------stack b------\n\033[0m");
	// showlst(sb);
}
