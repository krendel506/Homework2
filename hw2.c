// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
   float x, e = 0;
   float y[15];
   int k = -1;
   printf("Enter x: ");
   scanf("%f",&x);
   do{
       printf("Enter e: ");
       scanf("%f",&e);
   }while(e<=0 || e>=1);

    do{
        k = k + 1;
         if(k == 0){
             y[k] = 1;
         }
         else if(k == 1){
             y[k] = x;
         }
         else if(k== 2){
             y[k] = 5.0/8.0;
         }
         else{
             y[k]= y[k-2]/2 + (3*y[k-3]) / 4;
         }
}while(k<15 || abs(y[k] - y[k-1]) >= e);
    
    for(int i = 0; i<= k; i++){
        printf("%d = %f\n",i, y[i]);
    }
    return 0;
}
