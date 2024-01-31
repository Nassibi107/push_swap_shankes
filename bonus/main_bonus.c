/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:26:30 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/29 09:44:24 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static int	is_empty(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str[i])
		return (1);
	return (0);
}

char	**input_checker(int ac, char **av)
{
	char	*str;
	char	**rst;
	int		len;

	len = ft_lenjoin(av, ac);
	str = ft_join(av, len, ac);
	rst = ft_split(str, ' ');
	if (is_valid(rst) && is_double(rst))
		return (rst);
	return (0x0);
}

static int	ft_parsing(int ac, char **av)
{
	int		j;
	int		e;

	j = 1;
	e = 0;
	while (j < ac)
	{
		if (is_empty(av[j++]))
			e += 1;
	}
	if (!e)
	{
		if (input_checker(ac, av) != NULL)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

int	main(int ac, char **av)
{
	t_stack	*sa;
	t_stack	*sb;
	t_stack_bs	*sl;
	char	*command;

	sb = NULL;
	ft_parsing(ac, av);
	command = get_next_line(0);
	while (command)
	{
		if (check_argg(command) || chrck_arg(command))
		{
			ft_add_back(&sl, skeap_nl(command));
		}
		else
			r_err(&sa, &sb, &sl);
		command = get_next_line(0);
	}
	aggs(&sl, &sa, &sb);
// 	ft_free_linked_list(&sa);
// 	ft_free_linked_list(&sb);
// 	ft_free_linked_list1(&sl);
}
