#include <stdio.h>

int main(){
   int v1;
   int v2;
   int v3;
   int v4; 
   int maior;
   maior = 0;
   
   scanf("%d", &v1);
   scanf("%d", &v2);
   scanf("%d", &v3);
   scanf("%d", &v4);
   
   if (v1 > maior){
       maior = v1;
   }
   
   if (v2 > maior){
       maior = v2;
   }
   
   if (v3 > maior){
       maior = v3;
   }
   
   if (v4 > maior){
       maior = v4;
   }
   
   printf("%d", maior);
   
}