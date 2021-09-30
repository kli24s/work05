all: work05.o
	gcc -o work05m work05.o

work05.o: work05.c
	gcc -c work05.c

run:
	./work05m

clean:
	rm *.o
	rm program
