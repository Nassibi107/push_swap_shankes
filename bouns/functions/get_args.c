/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:34:01 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/30 11:33:48 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdio.h>

char	**get_args(void)
{
	char		*str;
	char		*s;
	char		**strs;

	str = malloc(1);
	if (!str)
		return (0x0);
	while (1337)
	{
		s = get_next_line(0);
		if (!s)
			break ;
		if (!check_argg(s) && !chrck_arg(s))
			return (0x0);
		str = ft_strjoin(str, s);
	}
	strs = ft_split(str, '\n');
	return (strs);
}
