/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:53:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "algo.h"

int	ft_next_longest(int **ar, int i, int len)
{
	while (len > 0)
	{
		if (ar[0][len] == i)
			return (len);
		len--;
	}
	return (-1);
}

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
		i = ft_next_longest(ar, s, len);
		ft_find_node(*sa, i + 1)->sub = 1;
		if (s == 0)
			break;
		s -= 1;
		len -= len - i;
	}
}
