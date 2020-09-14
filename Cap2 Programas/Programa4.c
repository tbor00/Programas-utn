#include <stdio.h>

int main(){
    //Declaración de variables
    int a, b;
    float  far1, kelvin, celcius;
    //Salidas por pantalla
    printf("Convertidor de temperaturas");
    printf("\n1 para ingresar temperatura en celcius\n2 para Kelvin\n3 para Fahrenheit: ");
    scanf("%i", &a);

    //Evaluando condiciones
    if(a == 1){
        printf("\nIngrese temperatura: ");
        scanf("%f", &celcius);
        kelvin = celcius + 273.15;
        far1 = (celcius * 9) / 5 + 32;

        printf("\n Temperatura en Celcius: %.2f ºC", celcius);
        printf("\n Temperatura en Kelvin: %.2f K", kelvin);
        printf("\n Temperatura en Fahrenheit: %.2f ºF", far1);

    }else if(a == 2){
        printf("\nIngrese temperatura: ");
        scanf("%f", &kelvin);
        celcius = kelvin - 273.15;
        far1 = (celcius * 9) / 5 + 32;

         printf("\n Temperatura en Kelvin: %.1f K", kelvin);
         printf("\n Temperatura en Celcius: %.2f ºC", celcius);
         printf("\n Temperatura en Fahrenheit: %.2f ºF", far1);

    }else if(a == 3){
        printf("\nIngrese temperatura: ");
        scanf("%f", &far1);
        celcius =((far1 - 32) * 5) /9;
        kelvin =((far1 - 32) * 5) /9 + 273.15;

        printf("\n Temperatura en Fahrenheit: %.2f ºF", far1);
        printf("\n Temperatura en Celcius: %.2f ºC", celcius);
        printf("\n Temperatura en Kelvin: %.2f K", kelvin);

    }

    return 0;
}
