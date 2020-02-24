#Variables
OBJS = main.o read_dic.o filter_keys.o ft_putnbr.o
CFLAGS = -Wall -Werror -Wextra
BINARY = rush-02

all: rush-02

#Makefile General
rush-02: $(OBJS)
	gcc $(CFLAGS) -o $(BINARY) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $?

fclean:
	rm -f rush-02 $(OBJS)