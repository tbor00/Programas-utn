#include <stdio.h>

int main(){


        int a, num, suma = 0;

         printf("\n Ingrese un numero para verificar si es perfecto: ");
         scanf("%d", &num);

            for(a = 1; a < num; a++){
             if(num%a== 0){
                    suma = suma +  a;
                }
         }

    if(num == suma){
        printf("\n El numero es perfecto");
    }else{
        printf("\n El numero no es perfecto");
    }




return 0;
}
