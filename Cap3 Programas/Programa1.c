#include <stdio.h>

int main(){

    int a, cont = 0;



            while(a > 0 ){

                printf("\n Ingrese valores, el ingreso terminara con un numero negativo:  ");
                scanf("%d", &a);
                 if(a % 2 == 0){
                    cont++;

                }
            }

                  printf("numeros pares: %i", cont);




    return 0;
}
