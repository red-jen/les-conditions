#include <stdio.h>
#include <stdlib.h>

int main() {
    char voyelle;
    printf("entrez un caractere :   ");
    scanf("%c",&voyelle);

    switch(voyelle){
        case 'a':
        printf("il y a une voyelle");
        break;
         case 'i':
        printf("il y a un voyelle");
         break;
         case 'o':
        printf("il y a un voyelle");
         break;
         case 'u':
        printf("il y a un voyelle");
         break;
         case 'y':
        printf("il y a un voyelle");
         break;
         case 'e':
        printf("il y a un voyelle");
         break;
         default:
         printf(" votre carachtere n est pas un voyelle");
    }

   
   return 0;
}