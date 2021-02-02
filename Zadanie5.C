#include <stdio.h>

int main()
{
    int wiek;
    printf ("Podaj swoj wiek w latach\n");
    scanf("%d", &wiek);
    float przelicznik = 3.156E7;
    long wynik = wiek * przelicznik;
    printf ("Twoj wiek w sekundach to : %ld\n", wynik);
}
