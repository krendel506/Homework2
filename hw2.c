// Online C compiler to run C program online
#include <stdio.h>

int main() {
   float x, e = 0;
   float y[15];
   printf("Enter x: ");
   scanf("%f",&x);
   do{
       printf("Enter e: ");
       scanf("%f",&e);
   }while(e<=0 || e>=1);
    
    for(int k =0; k<15;k++){
         if(k == 0){
             y[k] = 1;
         }
         else if(k == 1){
             y[k] = x;
         }
         else if(k== 2){
             y[k] = 5/8;
         }
         else{
             y[k]= y[k-2]/2 + (3*y[k-3]) / 4;
         }
    }
    printf("%f", y[3]);
    return 0;
}