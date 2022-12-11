# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 04:38:25 by abziouzi          #+#    #+#              #
#    Updated: 2022/12/10 05:48:20 by abziouzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compilation - Files & Directories

NAME			=	minishell

CC				=	cc

CFLAGS			=	-Wall -Wextra -Werror

RLFLAGS			=	-ledit 

RM				=	rm -rf

MS_LIBFT		=	$(addprefix ms_libft/, ms_calloc ms_isspace ms_strdup ms_strlen ms_substr)
MS_LEXER		=	$(addprefix ms_lexer/, ms_lexer ms_lexer_utils)

MS_FILES		=	$(addprefix src/, ms_main ms_utils ms_signals $(MS_LIBFT) $(MS_LEXER))

HEADER			=	$(addprefix inc/, minishell.h env.h ms_libft.h)

INC				=	-I inc

SRC				=	$(MS_FILES:=.c)
OBJ				=	$(MS_FILES:=.o)

#	Commands

.PHONY			:	all clean fclean re

all				:	$(NAME)

$(NAME)			:	$(OBJ) $(HEADER)
					@ $(CC) $(OBJ) $(INC) $(RLFLAGS) -o $(NAME)

%.o				:	%.c $(HEADER)
					@ $(CC) $(CFLAGS) $(INC) -c $< -o $@

clean			:
					@ $(RM) $(OBJ)

fclean			:	clean
					@ $(RM) $(NAME)

re				:	fclean all
