CC=g++
CFLAGS=-I.
DEPS = integerarray.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: quiz6.o integerarray.o 
	$(CC) -o quiz6 quiz6.o integerarray.o 
clean:
	bin/rm -rf *.o a.out 