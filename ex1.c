#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    int num1;
   
    printf("entrez le nombre :   ");
   
    scanf("%d", &num1);

    
    if ((num1 % 2) == 0){
      printf("le nombre est pair ");

}
    else{
        printf("le nombre est impaire");
    }
    return 0;
}