#MAKEFILE
CFLAGS = -g -Wall -Wshadow
GCC = gcc $(CFLAGS)
SRCS = proj3.c child.c
OBJS = $(SRCS:%.c=%.o)

all: $(OBJS)
        $(GCC) $(OBJS) -o all

.c.o:
	$(GCC) $(CFLAGS) -c $*.c

clean: 
	rm -f *.o a.out all
