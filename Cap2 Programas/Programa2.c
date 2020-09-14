#include <stdio.h>


int main(){

    int a, b, c, suma;


    printf("Programa de promedio entre 3 numeros");


    printf("\nIngrese el primer numero: ");
    scanf("%i", &a);
    printf("\nIngrese el segundo numero: ");
    scanf("%i", &b);
    printf("\nIngrese el tercer numero: ");
    scanf("%i", &c);

    suma = (a + b + c) / 3;

    printf("\nEl promedio entre los tres numeros es: %i", suma);


}
