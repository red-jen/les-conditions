#include <stdio.h>
#include <stdlib.h>

int main(){
    int years;
    char choice;
    printf("inter how many years :  ");
    scanf("%d",&years);
    printf("chose one : months(M) | days(d) |hours(h)|minutes(m)|seconds(s).    : ");
    scanf("%c",&choice);
    scanf("%c",&choice);



    int M = years * 12;
    int d = years * 356;
    int h = d * 24 ;
    int m = h * 60;
    int s = m* 60;

    
    

    switch(choice){
    case 'M':
     printf("months == %d \n",M);
     break;
     case'd':
     printf("days == %d \n",d) ;
     break;
     case'h':
          printf("hours == %d \n",h);
    break;
     case'm':
     printf("min == %d \n",m);
     break;
     case 's':
     printf("s == %d ",s);
     break;
     default :
     printf("your choice can't be chosen (learn to read , i have to learn how to write.)");

}
     return 0;
}