#  ╓─────[ Fillit ]─[ v0.0.1 ]  
#  ║ Created by: ctrouill (ctrouill@student.42.fr)
#  ║ Created at: Tue Nov  7 14:40:48 CET 2017
#  ║ Last Edited: Tue Nov  7 14:40:48 CET 2017
#  ╙─────────────────────────────────────────── ─ ─ 

#  ╓─────[ Target ]─  
#  ╙───────────────────── ─ ─ 
NAME = fillit

#  ╓─────[ Compiler ]─  
#  ╙───────────────────── ─ ─ 
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
LDFLAGS = ./libft/libft.a

#  ╓─────[ Functions ]─  
#  ╙───────────────────── ─ ─

SRC = main.c parser.c error.c validity.c alloc.c utils.c solve.c
LIBFT = libft/
INC = srcs/
OBJ = $(SRC:.c=.o)

vpath %.c srcs/

#  ╓─────[ Procedures ]─  
#  ╙───────────────────── ─ ─
all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) lib
	@$(CC) $(OBJ) $(CCFLAGS) $(LDFLAGS) -o $(NAME)
	@echo "\n\033[0;32m [OK] \033[0m \033[0;33m Linking binary:\033[0m " $(NAME)

%.o : %.c
	@echo "\033[0;32m [OK] \033[0m \033[0;33m Compiling:\033[0m " $@
	@$(CC) $(CCFLAGS) -I$(INC)  -c -o $@ $<

clean:
	@$(MAKE) -C $(LIBFT) clean
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT) fclean

re:
	@$(MAKE) fclean
	@$(MAKE) all

lib:
	@make -C $(LIBFT)

#  ╓─────[ Call me maybe ]─  
#  ╙───────────────────── ─ ─ 
.PHONY: all lib clean fclean re
