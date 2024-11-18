NAME = print.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror

SRC = ft_numlen.c ft_printf.c ft_printstr.c ft_hexade_low.c	ft_printadds.c ft_printuns.c ft_hexade_upr.c ft_printchar.c ft_printnbr_int.c
	  
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

.PHONY : clean 
