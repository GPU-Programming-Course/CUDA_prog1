all: prob1 prob2 prob3 prob4 prob5
CFLAGS = -Wall -g
CC = gcc

prob1: prob1.c

prob2: prob2.c

prob3: prob3.c

prob4: prob4.c

prob5: prob5.c

clean:
	rm -f prob1 prob2 prob3 prob4 prob5
