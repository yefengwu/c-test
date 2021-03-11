CFLAGS=-c -Wall -I include
CC = gcc
VPATH:src1 src2 main
#OBJS=f1.o f2.o
#OBJS+=main.o
CC = gcc

f1:f1.o f2.o main.o
	$(CC)  $^ -o test

#%.o:%.c
   # $(CC) -c $(CFLAGS) $< -o $@

.PHONY:clean
clean:
	find ./ -name "*.o" -exec rm {} \;;rm test
