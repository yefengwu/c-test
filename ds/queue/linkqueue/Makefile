CFLAGS = -g -Wall
CC = gcc
SRC = linkqueue.c linkqueue_test.c
OBJS = linkqueue_test

$(OBJS):$(SRC)
	$(CC) $(CFLAGS) -o $@ $^


.PHONY:clean
clean:
	$(RM) $(OBJS) .*.sw?  
