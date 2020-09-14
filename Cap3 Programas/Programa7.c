#include <stdio.h>
#define valor 10000

int main(){

    int i, suma , j;

    for(i = 1; i < valor; i++){
            suma = 0;
        for(j = 1; i > j; j++){
             if(i%j== 0)
                suma=suma + j;

        }

        if(suma == i){
                printf("\t%d", i);
            }

    }



return 0;
}
