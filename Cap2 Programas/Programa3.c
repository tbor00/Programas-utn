#include <stdio.h>


int main(){

    float a, b, c;
    printf("\nIngrese la primera diagonal del rombo: ");
    scanf("%f", &a);
    printf("\nIngrese la segunda diagonal del rombo: ");
    scanf("%f", &b);
    c = (a * b) / 2;

    printf("\nEl area del rombo es: %.2f cm cuadrados", c);

}
