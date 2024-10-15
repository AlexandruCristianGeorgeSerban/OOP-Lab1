#include <stdio.h>

// Definim FOLOSESTE_HEADER1 Pentru A Selecta Headerul Care Va Fi Activ
#define FOLOSESTE_HEADER1 1

#if FOLOSESTE_HEADER1
#include "header1.h"
#else
#include "header2.h"
#endif

#include "temperatura.h"

#include "platforma.h"

int main() {
    // Conversia De Temperatura
    Temperatura temp;
    temp.valoare = 76;
    temp.unitatemasura = 'F';

    printf("Inainte De Conversie: %.2f %c\n", temp.valoare, temp.unitatemasura);
    convertTemperatura(&temp);
    printf("Dupa Conversie: %.2f %c\n", temp.valoare, temp.unitatemasura);

    // Apelam functia() Pentru A Afla Care Header Este Activ
    functia();

    mesajSpecificPlatformei();

    return 0;
}
 /*
    Header Files (.h): Furnizeaza declaratii si prototipuri de functii care pot fi utilizate de fisierele sursa.
    Ele fac parte din interfata, dar nu contin implementarile reale.
    
    Static Libraries (.lib): Contin cod compilat care este legat direct in program in timpul compilarii,
    facand executabilul final independent.
    
    Dynamic-Link Libraries (.dll): Contin cod care este legat la rulare, permitand mai multor programe sa partajeze acelasi cod,
    reducand astfel utilizarea memoriei, dar introducand dependente externe.
  */