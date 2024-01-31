/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:29:04 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/29 09:46:22 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>
# include <unistd.h>

#include "../push_swap.h"
#include  "../src/libft/libft.h"
#include "get_next_line.h"


typedef struct stack_bonus
{
	char						*value;
	struct stack_bonus	*next;
}				t_stack_bs;

int	chrck_arg(char *arg);
void	r_err(t_stack **sa, t_stack **sb, t_stack_bs **str);
void	fpush(t_stack **st1, t_stack **st2);
void	ft_rotate_ab_bonus(t_stack **sa, t_stack **sb);
void	ft_rotate_bonus(t_stack **head, int flag);
void	rrotate_ab_bonus(t_stack **sa, t_stack **sb);

void	rrotate_ab_bonus(t_stack **sa, t_stack **sb);
void	ft_swap_bonus(t_stack **head, int flag);
// remove_nl
char	*skeap_nl(char *arr);
t_stack_bs	*ft_lastnew_bonus(char *value);
void	ft_add_back(t_stack **sa, char *s);
void	ft_rrotate_bonus(t_stack **head, int flag);
void	ft_rrotate_ab_bonus(t_stack **sa, t_stack **sb);
void	ft_swap_ab_bonus(t_stack **stack_a, t_stack **stack_b);
void	agg(t_stack_bs **head, t_stack **stack_a, t_stack **stack_b);
void	aggs(t_stack_bs **head, t_stack **stack_a, t_stack **stack_b);
t_stack_bs	*ft_lastnew_bonus(char *value);
int	ft_lstsize_bonus(t_stack *stack);
t_stack_bs	*get_lst_pos_bonus(t_stack_bs *head, int a);
void	ft_mprint(t_stack **sa, t_stack **sb);

t_stack	*ft_lstlast_bonus(t_stack *head);
int	check_argg(char *arrg);
int	chrck_arg(char *arg);
//ft_applay1 ==> agg
//ft_applay2 ==> aggs
// ft_is_valid1 => check_argg

#endif
