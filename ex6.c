#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    printf("inter your number  ");
    scanf("%d",&num1);

    if(num1 < 0){
        printf("you intered a negative numberr");
      }else if (num1 > 0){
            printf("you intered a positife number");

        }else{
            printf("you intered a 0");
        }
   
    return 0;

}