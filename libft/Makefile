# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: alexander <alexander@student.codam.nl>       +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/04 10:25:30 by alexander     #+#    #+#                  #
#    Updated: 2022/08/12 19:16:58 by ahorling      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

############### CONSTANTS ############

NAME := libft.a
CFLAGS := -Wall -Werror -Wextra
CC := gcc

############### SOURCES ##############

SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_numberleng.c \
		ft_hexalower.c \
		ft_hexaupper.c \

OBJS = $(SRC:.c=.o)
HEADER = libft.h

############### MESSAGES #############

RUN_MESSAGE	=	"Making libft library"
MESSAGE_FIN	=	"LIBFT LIBRARY COMPLETE"
MESSAGE_RM	=	"Cleaned libft library"

############### WORKINGS #############


all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo $(MESSAGE_FIN)

%.o: %.c $(HEADER)
	@$(CC) -c $(CFLAGS) -o $@ $<
	@echo $(RUN_MESSAGE)

clean:
	@rm -f $(OBJS)
	@echo $(MESSAGE_RM)


fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re