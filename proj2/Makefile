#	MAKEFILE
CFLAGS = -g -Wall -Wshadow
GCC = gcc $(CFLAGS)
SRCS = proj2.c Search.c Insert.c PrintTree.c
OBJS = $(SRCS:%.c=%.o)

tree: $(OBJS)
	$(GCC) $(OBJS) -o tree

.c.o:
	$(GCC) $(CFLAGS) -c $*.c
    
clean: 
	rm -f *.o a.out tree
