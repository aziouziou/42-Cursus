# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 00:15:22 by abziouzi          #+#    #+#              #
#    Updated: 2022/10/01 00:15:22 by abziouzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation

NAME				=	push_swap

NAME_BONUS			=	checker

CC					=	cc

CFLAGS				=	-Wall -Wextra -Werror

RM					=	rm -rf

# Files & Directories

SRC_PATH			=	./src/

OBJ_PATH			=	./obj/

INCDIR				=	./inc/

SRC_NAME			=	main/main.c					\
						parsing/args_processor.c	\
						actions/push.c				\
						actions/rotate.c			\
						actions/reverse_rotate.c	\
						actions/swap.c				\
						checker/checker.c			\
						utils/ps_atol.c				\
						utils/ps_error.c			\
						utils/ps_isdigit.c			\
						utils/ps_putstr_fd.c		\
						utils/ps_split.c			\
						utils/ps_strlen.c			\
						utils/ps_substr.c			\
						utils/ps_utils.c

BONUS_SRCS			=	checker/checker.c				\
						src/actions/push.c				\
						src/actions/rotate.c			\
						src/actions/reverse_rotate.c	\
						src/actions/swap.c				\
						src/checker/checker.c			\
						src/parsing/args_processor.c	\
						src/utils/ps_atol.c				\
						src/utils/ps_error.c			\
						src/utils/ps_isdigit.c			\
						src/utils/ps_putstr_fd.c		\
						src/utils/ps_split.c			\
						src/utils/ps_strlen.c			\
						src/utils/ps_substr.c			\
						src/utils/ps_utils.c

OBJ_NAME			=	$(SRC_NAME:.c=.o)

CHECKER_OBJ_NAME	=	$(BONUS_SRCS:.c=.o)

# Files
SRC					=	$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ					=	$(addprefix $(OBJ_PATH), $(OBJ_NAME))

CHECKER_SRC			=	$(addprefix $(SRC_PATH)/, $(BONUS_SRCS))

CHECKER_OBJ			=	$(addprefix $(OBJ_PATH), $(CHECKER_OBJ_NAME))

all					:	$(NAME) obj

obj					:
						@mkdir -p $(OBJ_PATH)
						@mkdir -p $(OBJ_PATH)/actions
						@mkdir -p $(OBJ_PATH)/checker
						@mkdir -p $(OBJ_PATH)/main
						@mkdir -p $(OBJ_PATH)/parsing
						@mkdir -p $(OBJ_PATH)/utils

$(OBJ_PATH)%.o		:	$(SRC_PATH)%.c
						$(CC) $(CFLAGS) -o $@ -c $<

$(NAME)				:	$(OBJ)
						$(CC) $(CFLAGS) $(OBJ) -o $@

clean				:
						$(RM) $(OBJ_PATH)
						$(RM) $(CHECKER_OBJ_PATH)

fclean				:	clean
						$(RM) $(NAME)

re					:	fclean all
