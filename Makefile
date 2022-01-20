INC		=	ft_printf.h
SRCS	=	ft_printf.c ft_print_c_and_str.c ft_utility.c\
			ft_libft.c ft_d_i_X_x_printf.c

OBJS	=	$(SRCS:.c=.o)

CC			= clang
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a

all:		$(NAME)
$(NAME):	$(OBJS) $(INC)
			ar rcs $(NAME) $?
%.o : %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@
clean:
			$(RM) $(OBJS)
fclean:	clean
			$(RM) $(NAME)
re:			fclean $(NAME)
.PHONY:	all clean fclean re bonus