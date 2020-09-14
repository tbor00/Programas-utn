#include <stdio.h>


int main(){
    //Declarando variables
    float a, b, porcentaje, resta;
    printf("Facturación");
    printf("\nIngrese el total de la factura: ");
    scanf("%f", &a);
    printf("\nIngrese el valor a descontar en porcentaje: ");
    scanf("%f", &b);
    //Haciendo las operaciones aritmeticas para que den los numeros
    porcentaje =(a * b) / 100;
    resta = a - porcentaje;
    printf("\n EL TOTAL DE LA FACTURA ES DE: %.2f", resta);

}
