##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	add.c	\
		del.c	\
		sort.c	\
		disp.c	\
		push_to_list.c	\
		display_list.c	\
		get_max_id.c	\
		sort_id.c	\
		sort_type.c	\
		sort_name.c	\
		initialise_list.c	\
		util_lst.c	\
		sort_util.c	\
		check_sort.c	\

SRC_LIB	=	lib/my/mini_printf.c	\
			lib/my/my_put_nbr.c	\
			lib/my/my_putchar.c	\
			lib/my/my_strlen.c	\
			lib/my/my_putstr.c	\
			lib/my/my_strcmp.c	\
			lib/my/my_strcpy.c	\

SRC_TESTS	=	tests/Test_add.c	\
				tests/Test_del.c	\

NAME	=	organized

CFLAGS	=	-Wall -Werror -Wextra -I./include/	\
	-L./lib/shell/ -lshell -L./lib/my/ -lmy

CFLAGS_LIB 	=	-I./include/ -Werror -Wall -Wextra

CFLAGS_TEST	=	-Wall -Werror -Wextra -I./include/	\
	-L./lib/shell/ -lshell -L./lib/my/ -lmy -lcriterion --coverage

OBJ	=	$(SRC_LIB:.c=.o)

all: libmy.a
	gcc -o $(NAME) $(SRC) main.c $(CFLAGS)

libmy.a:	$(OBJ)
	gcc -c $(SRC_LIB) $(CFLAGS_LIB)
	ar rc lib/my/libmy.a $(OBJ)
	find -name "*.o" -delete

clean:
	rm -f $(NAME)

fclean: clean
	rm -f lib/my/libmy.a
	rm -f *.gcda
	rm -f *.gcno
	rm -f unit_tests

re: fclean all

unit_tests: re
	gcc -o unit_tests $(SRC) $(SRC_TESTS) $(CFLAGS_TEST)

tests_run: unit_tests
	./unit_tests
