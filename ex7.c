#include <stdio.h>
#include <stdlib.h>

int main(){
    char carachtere;
    printf("entre votre caractere :  ");
    scanf("%c",&carachtere);

    if(carachtere < 90 && carachtere > 65){
        printf("votre caractere est majuscule");
    }else{
        printf("votre carachtere est miniscule");
    }
    return 0;
}