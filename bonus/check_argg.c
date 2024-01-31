/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:53:29 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 16:51:47 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	check_argg(char *arrg)
{
	int	len;
	len = ft_strlen(arrg);
	if (len < 2)
		return (0);
	if (!(ft_strncmp(arrg, "rra", len)))
		return (1);
	else if (!(ft_strncmp(arrg, "rrb", len)))
		return (1);
	else if (!(ft_strncmp(arrg, "rrr", len)))
		return (1);
	else if (!(ft_strncmp(arrg, "sa", len)))
		return (1);
	return (0);
}

