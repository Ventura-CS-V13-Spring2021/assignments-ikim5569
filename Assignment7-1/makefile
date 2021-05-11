CC=g++
CFLAGS=-I.
DEPS = student.hpp address.hpp DOB.hpp

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

buildall: main.o student.o address.o DOB.o
	$(CC) -o main main.o student.o address.o DOB.o
clean:
	bin/rm -rf *.o a.out 