#Variables
OBJS = main.o check_map.o read_map.o
CFLAGS = -Wall -Wextra -Werror
BINARY = BSQ

all: BSQ

#Makefile General
BSQ: $(OBJS)
	gcc $(CFLAGS) -o $(BINARY) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $?

fclean:
	rm -f BSQ $(OBJS)
