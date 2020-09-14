#include <stdio.h>
#include <math.h>

int main(){

    float ingreso, diametro, circunf, superficie;
    printf("Ingresar el numero del radio: ");
    scanf("%f", &ingreso);
    diametro = ingreso * 2;
    circunf = diametro * 3.14;
    superficie = 3.14 * (ingreso * ingreso);

    printf("\n Diametro es: %.1f", diametro);
    printf("\n Circunferencia es: %.2f", circunf);
    printf("\n Superficie es: %.2f", superficie);

    return 0;
}
