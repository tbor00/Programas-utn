#include <math.h>
#include <stdio.h>
#define clave 23645
int main(){

    int user, contra;


    user = 1020;
    contra = 23645;

    int a, b, c;

    int contador = 0;

    printf("\n\nusuario: ");
    scanf("%i", &a);
    printf("\n\nContraseña: ");
    scanf("%i", &b);

    if(a == user && b == contra){
        printf("\nIngreso exitoso");
    }else if(b != contra){
        contador++;
        while(contador < 3){
           printf("\n\nContraseña: ");
            scanf("%i", &b);
            contador++;
            if(contador == 3){
                printf("Ingreso la contraseña mal 3 veces");
            }
    }

    }






    return 0;
}
