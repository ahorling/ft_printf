# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ahorling <ahorling@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/20 16:42:04 by ahorling      #+#    #+#                  #
#    Updated: 2022/08/12 19:23:04 by ahorling      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

############## CONSTANTS #############

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror

############### SOURCES ##############

SOURCES 	:=	ft_printf.c \
				print_pointer.c \
				print_char.c \
				print_hexa_lower.c \
				print_hexa_upper.c \
				print_int.c \
				print_percent.c \
				print_string.c \
				print_unsigned.c \

LIB_DIR		:=	./libft/libft.a
SOURCE_DIR 	:=	./sources
INCLUDE_DIR	:= 	./includes
OBJECT_DIR	:=	./objects
OBJECTS 	:= 	$(addprefix $(OBJECT_DIR)/, $(SOURCES:.c=.o))

############### MESSAGES ########

MESSAGE		:=	"Making $(NAME)"
MESSAGE_FIN	:=	"MAKE COMPLETE, NO ERRORS"
MESSAGE_RM	:=	"OBJECTS CLEANED"
MESSAGE_FRM	:=	"EVERYTHING CLEANED"

############### RUNNING ##############

all: $(NAME)

$(LIB_DIR):
	@$(MAKE) -C libft/

$(NAME): $(OBJECTS) $(LIB_DIR)
	@ar rcs $@ $^
	@ar -q $(LIB_DIR) $(OBJECTS)
	@cp $(LIB_DIR) $(NAME)
	@echo $(MESSAGE_FIN)

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo $(MESSAGE)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)
	@$(MAKE) fclean -C libft/
	@echo $(MESSAGE_RM)

fclean: clean
	@rm -f $(NAME)
	@if [ -d "$(OBJECT_DIR)" ]; then rm -d $(OBJECT_DIR); fi
	@echo $(MESSAGE_FRM)

re: fclean all

.PHONEY: all clean fclean redo
