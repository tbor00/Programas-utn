#include <stdio.h>

int main(){

    int a, c= 0, d= 0;

        for(a= 0; a <= 100; a++){

            if(a % 2 == 0){
                d = d + a;
            }else{
                c = c + a;
            }
    }

        if(d > c){
          printf("\n Los numeros con mayor suma son los pares: %i", d);
        }else{
          printf("\n Los numeros con mayor suma son los impares: %i", c);
        }

        printf("\n\t\tLos numeros son: ");
        printf("\n\t\tNumeros pares: %i", d);
        printf("\n\t\tNumeros impares: %i", c);



    return 0;
}
