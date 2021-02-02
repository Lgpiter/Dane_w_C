#include <stdio.h>

int main()
{
    float pom;
    printf ("Podaj liczbe zmiennoprzecinkowa :\n");
    scanf("%f",&pom);
    printf ("Liczba ta w systemie dziesietnym : %f\n", pom);
    printf ("Liczba ta w notacji wykladniczej : %e\n", pom);
}
