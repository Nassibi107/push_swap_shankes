/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:53:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 15:35:38 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"


void	ft_setflag(t_stack **sa, int **ar, int len)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i < len)
	{
		if (s < ar[0][i])
			s = ar[0][i];
		i++;
	}
	while (1)
	{
		if (i == -1)
			break ;
		i = getnt_lstsub(ar, s, len);
		get_lst_pos(*sa, i + 1)->sub = 1;
		if (s == 0)
			break;
		s -= 1;
		len -= len - i;
	}
}
