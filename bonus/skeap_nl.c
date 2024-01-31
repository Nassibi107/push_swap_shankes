/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skeap_nl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:01:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 15:05:18 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

char	*skeap_nl(char *arr)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(arr) + 1);
	if (!str)
		return (NULL);
	while (arr[i] && arr[i] != '\n')
	{
		str[i] = arr[i];
		i++;
	}
	str[i] = 0;
	free(arr);
	return (str);
}
