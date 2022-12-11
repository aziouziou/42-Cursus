# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/11 01:45:01 by abziouzi          #+#    #+#              #
#    Updated: 2022/12/09 03:46:10 by abziouzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g

RM		=	rm -rf

SRC		=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c \
			ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_strncpy.c ft_strlcpy.c ft_strncat.c \
			ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strlen.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c \
			ft_atoi.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_putnstr.c \
			ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_split.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_putchar.c ft_putnbr.c \
			ft_putstr.c ft_putendl.c \

OBJ		=	$(SRC:%.c=%.o)

all		:	$(NAME)

$(NAME):	$(OBJ)
			@ar rcs $(NAME) $(OBJ)
			@echo " [ OK ] | Libft ready!"

%.o		:	%.c libft.h
			$(CC) $(CFLAGS) -c $< -o $@


clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
