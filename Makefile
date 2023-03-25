NAME = pipex

RM = rm -f
CFLAGS = -Wall -Wextra -Werror
CC = cc

FUNCTIONS = functions/ft_getenv\
			functions/ft_getpath\
			functions/ft_openfd\
			functions/ft_closefd\
			functions/ft_perror\
			functions/utils/ft_memcmp\
			functions/utils/ft_memcpy\
			functions/utils/ft_split\
			functions/utils/ft_strlen\
			functions/utils/ft_substr\
			functions/utils/ft_strchr\
			functions/utils/ft_strjoin\
			program/main\

OBJECT = $(FUNCTIONS:=.o)

all :  $(NAME)

$(NAME) : $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o $@ 

%.o : %.c program/main.h
	$(CC) $(CFLAGS) -c -o $@  $<
	

clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re all
