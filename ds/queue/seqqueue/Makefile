CFLAGS = -g -Wall
CC = gcc
SRC = seqqueue.c seqqueue_test.c
OBJS = seqqueue_test

$(OBJS):$(SRC)
	$(CC) $(CFLAGS) -o $@ $^


.PHONY:clean
clean:
	$(RM) $(OBJS) .*.sw?  
