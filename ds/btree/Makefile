CFLAGS = -g -Wall
CC = gcc
SRC = btree.c test.c linkqueue.c linkstack.c
OBJS = test

$(OBJS):$(SRC)
	$(CC) $(CFLAGS) -o $@ $^


.PHONY:clean
clean:
	$(RM) $(OBJS) .*.sw?  
