CC=g++
CFLAGS=-I.
DEPS = integerarray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: mainquiz6.o integerarray.o 
	$(CC) -o mainquiz6 mainquiz6.o integerarray.o 
clean:
	bin/rm -rf *.o a.out 