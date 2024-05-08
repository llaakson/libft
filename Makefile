# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llaakson <llaakson@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 14:22:44 by llaakson          #+#    #+#              #
#    Updated: 2024/05/07 20:18:33 by llaakson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =	ft_strlen.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_strlcpy.c \
			ft_strdup.c \
			ft_bzero.c \
			ft_memset.c \
			ft_calloc.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strtrim.c \
			ft_memmove.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_split.c \

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		  

OBJECTS = $(SOURCES:.c=.o)

OBJECTSBONUS = $(BONUS:.c=.o)

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	ar	-r	$(NAME) $(OBJECTS)

bonus: $(NAME) $(OBJECTSBONUS)
	ar	-r $(NAME)	$(OBJECTSBONUS)

clean:
	rm -f $(OBJECTS) $(OBJECTSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
