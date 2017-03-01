/*
 *  Wzorce: 
 *  	https://www.dwheeler.com/program-library/
 *  	http://home.agh.edu.pl/~gjn/dydaktyka/TechKomp/
 *
 *  Zalozenia projektu:
 *  - obsluga przelacznikow za pomoca getopt_long
 *  - funkcja uruchamiana z biblioteki skompilowanej statycznie
 *  
 *  Widocznosc zmiennych/funkcji
 *  Pokazuje w jaki sposob uzywac static/extern dla zmiennych i funkcji
 *  Kompilacja: gcc -o bulb bulb.c zmienne.c
 *  Zmienna a jest zadeklarowana i zdefiniowana w zmienne.c i jest DOMYSLNIE
 *  widziana tylko w tej jednostce kompilacji. Usun 'extern int a;' i sprobuj
 *  skompilowac program. Linijka ta informuje kompilator zeby szukal jej we
 *  we wszystkich innych jednostkach kompilacji. Moze to byc uzyteczne przy
 *  dostepie do zmiennych statusu, ale lepiej uzyc funkcji ktore by takie 
 *  zmienne odczytywaly/zapisywaly.
 *  
 *  Jesli w zmienne.c dodamy static to nie bedzie widziana W OGOLE na zewnatrz,
 *  tzn. extern w wjeszak.c nie zadziala.
 *  Mozna takze wyrzucic zapis extern int a do pliku naglowkowego zmienne.h
 *  i go dolaczyc do bulb.c
 *  
 *  Funkcje nalezy jawnie deklarowac jako extern, inaczej przy -Wall
 *  jest implicit....
 *  Jesli przy definicji dodamy static to extern nie bedzie dzialac
 */

#include <stdio.h>
extern int a;
extern int dodaj(int a, int b);
int main(void)
{
    printf("Dzien dobry!\n");
    printf("Zmienna a = %d\n", a);
    int wynik = dodaj(3, 5);
    printf("Wynik funkcji dodaj(): %d\n", wynik);
    return 0;
}
