# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hheng <hheng@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 12:56:19 by hheng             #+#    #+#              #
#    Updated: 2024/02/24 13:03:31 by hheng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = src/ft_putchar.c/ft_putstr.c/ft_strcmp.c/ft_strlen.c/ft_swap.c 
OBJS = $(SRCS:.c = .o)
INCS = includes
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CC = gcc
RM    = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
    ${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
    ${LIBC} ${NAME} ${OBJS}
    ${LIBR} ${NAME}

all: ${NAME}

clean:
    ${RM} ${OBJS}

fclean: clean
    ${RM} ${NAME}

re: fclean all

norm :
    norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm test

test: ${OBJS}
    @echo "All source files compiled successfully."
