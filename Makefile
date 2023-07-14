# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 10:10:42 by lrosa-do          #+#    #+#              #
#    Updated: 2022/07/29 19:20:26 by lrosa-do         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap



SRCS 		= push_swap.c ft_atoi.c ft_split.c create_stack.c check_order.c init_order.c \
			solver.c min_max.c swap.c push.c rotate.c reverse_rotate.c ft_utils.c ft_lts.c


OBJS 		= ${SRCS:.c=.o}

CC			= cc

CFLAGS 		= -Wall -Wextra -Werror 

RM			= rm -f

all:		${NAME}


$(NAME):	${OBJS} 
			${CC} -o ${NAME} ${OBJS} -I.

clean:
			${RM} ${OBJS}
			
fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}


.PHONY:		all clean fclean re
