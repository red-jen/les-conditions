#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("entrer la valeur de A : ");
    scanf("%d",&a);
    printf("\nentrer la valeur de b : ");
    scanf("%d",&b);
    printf("\nentrer la valeur de C : ");
    scanf("%d",&c);

    double delta =pow(b,2)-4*a*c;

    if (delta > 0){
       double x1 = (-b+sqrt(delta)) / (2*a);
        double x1a = -b-sqrt(delta)/2*a;
   printf("il y a deux solutions le premier est : %lf le deuxieme est : %lf ",x1,x1a);

    } 
    else if(delta == 0){
        float x2= -b/2*a;
        printf("la valeur de x est : %f",x2);
    }else{
        printf("pas de solution , la solution continue imaginnere numbers");
        
    }
    return 0;
    }