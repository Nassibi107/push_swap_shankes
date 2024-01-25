/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:01:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:59:52 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "src/libft/libft.h"


typedef struct stack
{
	int				value;
	int				sub;
	int				mv;
	struct stack	*hook;
	struct stack	*next;

}					t_stack;

t_stack			*lststack(t_stack *lst);
void				showlst(t_stack *head);
void				ft_optimized(t_stack **stack);
void				ft_lstadd_front_s(t_stack **head, t_stack *j);
t_stack			*ft_lstnew(int content);
void				ft_switch(t_stack *sa, t_stack *sb);
void				ft_push(t_stack **src, t_stack **dest, int flag);
void				ft_big_sort(t_stack **sa, t_stack **sb);
void				ft_final_sort(t_stack **sa);
int				ft_is_sorted(t_stack **sa);
t_stack			*ft_creat_stack(char **s);
t_stack			*ft_last(t_stack *head);
t_stack			*ft_find_node(t_stack *head, int a);
int				ft_find_node_flag(t_stack **head);
void				ft_push_flag(t_stack **sa, t_stack **sb);
t_stack			*ft_find_target(int a, t_stack **sa);
void				ft_set_target(t_stack **sa, t_stack **sb);
void				ft_sort4(t_stack **sa, t_stack **sb);
void				ft_subsequence_search(t_stack **sa, int **ar);
void				ft_sort3(t_stack **sa);
void				ft_setflag(t_stack **sb, int **ar, int len);
void				rotate(t_stack **head, int flag);
void				rrotate(t_stack **head, int flag);
void				ft_lstswap(t_stack **head, int flag);
void				ft_error(void);
int					ft_check_duplicated(char **s);
int					ft_check_empty(char *s);
char				**ft_split(char const *s, char c);
int					ft_check_character(char *str);
int					get_lstmax(t_stack *sa);
int					get_lstmin(t_stack *sa);
int					get_lstsize(t_stack *sa);
int					ft_is_int(char *str);
void				ft_ss(t_stack **sa, t_stack **sb);
void				ft_rr(t_stack **sa, t_stack **sb);
void				ft_rrr(t_stack **sa, t_stack **sb);
void				ft_down_up(t_stack **sa, t_stack **sb,
						t_stack *best);
void				ft_up(t_stack **sa, t_stack **sb,
						t_stack *best);
void				ft_down(t_stack **sa, t_stack **sb,
						t_stack *best);
int					ft_index(t_stack **stack, int a);
void				ft_check_best_move(t_stack **sb, t_stack **sa);
void				ft_min_moves(t_stack **sa, t_stack **sb);
void				ft_free_linked_list(t_stack **stack);
void				ft_free_string(char **s);
t_stack	*ft_befor_lst(t_stack *lst);
void	ft_build_sa(char **str, t_stack **sa);
int	is_double(char **rst);
int	ft_lenjoin(char **av, int ac);
char	*ft_join(char **av, int len, int ac);
int	is_valid(char **rst);
#endif
