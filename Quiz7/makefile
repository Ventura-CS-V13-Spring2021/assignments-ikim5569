CC=g++
CFLAGS=-I.
DEPS = rectangle.hpp coordinate.hpp
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o rectangle.o coordinate.o 
	$(CC) -o main main.o rectangle.o coordinate.o 
clean:
	bin/rm -rf *.o a.out 
