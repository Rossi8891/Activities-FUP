#include <stdio.h>

int main(){
   int m3;
   int conta = 0;
   
   scanf("%d", &m3);
   
   int i = m3;
   
   while (i > 9){
       if (i > 100){
           conta += 5;
       }
       
       else if (i > 30){
           conta += 2;
       }
       
       else if (i > 10){
           conta += 1;
       }
       
       else {
           conta +=7;
       }
       
       i -=1;
   }
   
   if (m3 > 9){
       printf("R$ %d", conta);
   }
   
   else{
       printf("R$ %d", 7);
   }
}