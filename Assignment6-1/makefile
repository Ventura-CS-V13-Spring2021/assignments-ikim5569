CC=g++
CFLAGS=-I.
DEPS = integerarray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: assignment6-1.o integerarray.o 
	$(CC) -o assignment6-1 assignment6-1.o integerarray.o 
clean:
	bin/rm -rf *.o a.out 