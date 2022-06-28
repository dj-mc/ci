run: cool
	./cool

cool: colors
	gcc -Wall main.o blue.o green.o -o ./cool

colors:
	echo "Making colors"
	gcc -Wall -c main.c blue.c green.c

clean:
	rm -f *.o cool
