/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chrck_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:16:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 14:35:19 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	chrck_arg(char *arg)
{
	int	len;

	len = ft_strlen(arg);
	if (len < 2)
		return (0);
	if (!(ft_strncmp(arg, "sb", len)))
		return (1);
	else if (!(ft_strncmp(arg, "ss", len)))
		return (1);
	else if (!(ft_strncmp(arg, "ra", len)))
		return (1);
	else if (!(ft_strncmp(arg, "rb", len)))
		return (1);
	else if (!(ft_strncmp(arg, "rr", len)))
		return (1);
	else if (!(ft_strncmp(arg, "pa", len)))
		return (1);
	else if (!(ft_strncmp(arg, "pb", len)))
		return (1);
	return (0);
}
