/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:49:36 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/26 11:38:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	is_lstsort(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *stack;
	if (!tmp)
		return (0);
	tmp1 = tmp->next;
	while (tmp1)
	{
		if (tmp->content > tmp1->content)
			return (0);
		tmp = tmp1;
		tmp1 = tmp1->next;
	}
	return (1);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] - s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
