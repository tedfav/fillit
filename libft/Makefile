#  ╓─────[ libft ]─[ v0.0.1 ]  
#  ║ Created by: ctrouill (ctrouill@student.42.fr)
#  ║ Created at: Tue Nov  7 14:40:48 CET 2017
#  ║ Last Edited: Tue Nov  7 14:40:48 CET 2017
#  ╙─────────────────────────────────────────── ─ ─ 

#  ╓─────[ Target ]─  
#  ╙───────────────────── ─ ─ 
NAME = libft.a

#  ╓─────[ Compiler ]─  
#  ╙───────────────────── ─ ─ 
CC = gcc
CCFLAGS = -Wall -Werror -Wextra -ansi -pedantic

#  ╓─────[ Directories ]─  
#  ╙───────────────────── ─ ─ 
INCLDIRS = ./

#  ╓─────[ Functions ]─  
#  ╙───────────────────── ─ ─
S_CORE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c  \
		 ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c
S_IO = ft_putchar_fd.c ft_putchar.c ft_putstr_fd.c ft_putstr.c \
	   ft_putnbr.c ft_putendl_fd.c ft_putnbr_fd.c ft_putendl.c \
	   ft_debug_ok.c ft_debug_info.c ft_debug_warn.c ft_debug_fatal.c
S_STRING = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		   ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
		   ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_toupper.c \
		   ft_tolower.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
		   ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c \
		   ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_countwords.c \
		   ft_strrev.c ft_itoa.c ft_isblank.c ft_isspace.c
S_PREDICATE = ft_isupper.c ft_islower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			  ft_isascii.c ft_isprint.c
S_DS = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lst_merge.c \
	   ft_stack_init.c ft_stack_top.c ft_stack_push.c ft_stack_pop.c
S_MATH = ft_abs.c ft_sqrt.c
S_FP = ft_range.c ft_map.c ft_foreach.c

FUN = $(S_CORE) $(S_IO) $(S_STRING) $(S_PREDICATE) $(S_DS) $(S_MATH) $(S_FP)  
O_FUN = $(FUN:.c=.o)

all: $(NAME)

$(NAME): $(O_FUN)
	@ar rcs $(NAME) $(O_FUN)
	@echo "\n\033[0;32m [OK] \033[0m \033[0;33m Linking library:\033[0m " $(NAME)

%.o : %.c 
	@echo "\033[0;32m [OK] \033[0m \033[0;33m Compiling:\033[0m " $@
	@$(CC) $(CCFLAGS) -I$(INCLDIRS) -c -o $@ $<

clean:
	@/bin/rm -Rf $(O_FUN)

fclean: clean
	@rm -f $(NAME)
	@echo  "\033[0;31m [✗] \033[0m \033[0;33m Removed last build: \033[0m " $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

#  ╓─────[ Call me maybe ]─  
#  ╙───────────────────── ─ ─ 
.PHONY: all clean fclean re
