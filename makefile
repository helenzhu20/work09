all: work09.o
	gcc -o program work09.o

work09.o: work09.c
	gcc -c work09.c

clean:
	rm -rf *.o