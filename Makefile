CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft.a
RM = rm -f
FUNCTIONS = ft_executing.c \
			ft_getpaths.c \

OBJECT = $(FILES:.c=.o)

LIBFT_PATH = libft/
objects_PATH = buid/

all : $(LIBFT) $(objects_PATH) $(NAME)

$(LIBFT):
	@make -s -C $(LIBFT_PATH)

$(objects_PATH):
	@mkdir $(objects_PATH)


%.o : %.c main.h
	$(CC) $(CFLAGS) -c -o $@  $<

$(NAME) : $(FUNCTIONS)
	$(CC) $(CFLAGS) 



# bonus : $(OBJECT_B)
# 	$(AR) $(NAME) $(OBJECT_B)

clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re all bonus


