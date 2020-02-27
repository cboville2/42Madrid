#Variables
NAME = BSQ
OBJS = main.o check_map.o read_map.o map_str.o
CFLAGS = -Wall -Wextra -Werror
BINARY = BSQ

all: $(NAME)

#Makefile General
BSQ: $(OBJS)
	gcc $(CFLAGS) -o $(BINARY) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $?

fclean:
	rm -f BSQ $(OBJS)
