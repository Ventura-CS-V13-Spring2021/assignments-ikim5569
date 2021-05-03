CC=g++
CFLAGS=-I.
DEPS = integerarray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: exercise6-3.o integerarray.o 
	$(CC) -o exercise6-3 exercise6-3.o integerarray.o 
clean:
	bin/rm -rf *.o a.out 