#include <stdio.h>

int main(){
   char r1;
   char r2;
   char r3;
   char r4; 
   int qt;
   qt = 0;
   
   scanf(" %c", &r1);
   scanf(" %c", &r2);
   scanf(" %c", &r3);
   scanf(" %c", &r4);
   
   if (r1 == 'd'){
       qt += 1;
   }
   
   if (r2 == 'a'){
       qt += 1;
   }
   
   if (r3 == 'c'){
       qt += 1;
   }
   
   if (r4 == 'd'){
       qt += 1;
   }
   
   if (qt == 4){
       printf("Super fa");
   }
   
   else if (qt == 3){
       printf("Fa");
   }
   
   else if (qt == 2){
       printf("Interessado no assunto");
   }
   
   else if (qt == 1){
       printf("Ja ouviu falar");
   }
   
   else {
       printf("Nunca assistiu");
   }
}