#include <stdio.h>
#include <stdlib.h>


int main(){
    int N1,N2;
    printf("entrez votre nombre : ");
    scanf("%d", &N1);
     printf("againe  :");
    scanf("%d",&N2);
int sum = N1 + N2;
if (N1 == N2){
    printf("%d",sum*3 );
} else{
printf("%d",sum);
}
return 0;
}