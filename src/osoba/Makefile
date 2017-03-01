#SCIEZKA = src/osoba
CFLAGI = -Wall
bulb: bulb.o zmienne.o
	gcc -o bulb bulb.o zmienne.o

bulb.o: bulb.c
	gcc -c $(CFLAGI) bulb.c

zmienne.o: zmienne.c
	gcc -c $(CFLAGI) zmienne.c

clean:
	rm -f *.o bulb
