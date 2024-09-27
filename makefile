.PHONY : clean

m : m.o
	gcc -Wall -Wextra -o m m.o

m.o : m.c
	gcc -Wall -Wextra -o m.o -c m.c

clean :
	rm -rf *.o m
