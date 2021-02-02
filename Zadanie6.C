#include <stdio.h>

int main()
{
    int litry;
    printf ("Podaj liczbe w litrach wody ");
    scanf("%d",&litry);
    double czasteczki;
    czasteczki = (1000*litry)/(3E-23);
    printf ("Jest to %f czasteczek wody\n",czasteczki);
    
}
