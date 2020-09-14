#include <stdio.h>

int main() {
    int a = 0;

    while(a < 5){
   unsigned char letra_1, letra_2;
   printf("\nIngrese una letra: ");
   scanf("%c", &letra_1);
   printf("\nEl codigo ASCII de %c es : %d", letra_1, letra_1);
   getchar();
   a++;

    }



return 0;
}
