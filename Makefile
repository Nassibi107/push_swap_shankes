
NAME = push_swap.a
AOUT = push_swap

SRCS_T = tools/ft_befor_lst.c tools/ft_build_sa.c tools/ft_double.c tools/ft_join.c tools/ft_free.c \
         tools/ft_join.c tools/ft_last.c tools/ft_lenjoin.c tools/ft_lstadd_front_s.c tools/ft_lstnew.c \
         tools/ft_switch.c tools/get_lst_id.c  tools/get_lst_pos.c tools/get_lstmax.c  tools/get_lstmin.c  \
         tools/get_lstsize.c tools/get_lstsub.c   tools/is_valid.c tools/lststack.c  tools/showlst.c

SRCS_L = src/libft/ft_atoi.c src/libft/ft_putchar_fd.c src/libft/ft_putendl_fd.c src/libft/ft_putnbr_fd.c \
         src/libft/ft_split.c src/libft/ft_isdigit.c src/libft/ft_putstr_fd.c src/libft/ft_bzero.c src/libft/ft_calloc.c

SRCS_LG = src/algo/ft_down.c src/algo/ft_down_up.c src/algo/ft_push.c \
		src/algo/ft_setflag.c src/algo/ft_sub.c src/algo/ft_up.c \
		src/algo/get_lsthl.c  src/algo/hundler_moves.c src/algo/is_lstsort.c \
		src/algo/lst_sort_3.c src/algo/lst_sort_4.c src/algo/push_lsthook.c \
		src/algo/set_lsthl.c src/algo/getnt_lstsub.c src/algo/ft_index.c  \
		src/algo/get_lstbmv.c  src/algo/skeaper.c

SRCS_F = src/functions/rotate.c src/functions/rotate_ab.c src/functions/rrotate.c src/functions/rrotate_ab.c \
			src/functions/shufting.c src/functions/sort.c src/functions/swap.c src/functions/swap_ab.c

SRC = main.c
OBJ = main.o
OBJS_T = $(SRCS_T:.c=.o)
OBJS_L = $(SRCS_L:.c=.o)
OBJS_LG = $(SRCS_LG:.c=.o)
OBJS_F = $(SRCS_F:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEAD = push_swap.h
CC = cc
GREEN = \033[1;32m
YELLOW		=	\e[38;5;226m
RESET = \033[0m
OK	=	[$(GREEN)SUCCESS$(RESET)]
NO	=	[$(YELLOW)INFO$(RESET)]
HEADERS = $(wildcard *.h)
%.o: %.c ${HEADERS}
	@${CC} ${FLAGS} -c $< -o $@

all: $(NAME) $(AOUT)

$(NAME): $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ar rc $(NAME) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ranlib $(NAME)

$(AOUT): $(NAME) $(OBJ)
	@$(CC) $(FLAGS) -o $@ $(OBJ) $(NAME)
	@$(RM) $(OBJ)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		push_swap is running "
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@printf "$(OK) push_swap ready.\n"

clean:
	@$(RM) -rf $(OBJ) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@printf "$(NO) object files removed.\n"

fclean: clean
	@$(RM) -rf $(NAME) $(AOUT)
	@printf "$(NO) $(NAME) removed.\n"

re: fclean all
