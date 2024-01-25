/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:42:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:39:12 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "tools.h"

void	ft_free_string(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	s = NULL;
}

void	ft_free_linked_list(t_stack **stack)
{
	t_stack	*temp;

	while (*stack)
	{
		temp = (*stack)->next;
		free((*stack));
		*stack = temp;
	}
	*stack = NULL;
}
