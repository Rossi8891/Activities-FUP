#include <stdio.h>

int main(){
   char j1;
   char j2;
   
   scanf(" %c", &j1);
   scanf(" %c", &j2);
   
   if (j1 == j2){
       printf("empate");
   }
   
   else if (j1 == 'R'){
       if (j2 == 'P'){
           printf("jog2");
       }
       else if (j2 == 'S'){
           printf("jog1");
       }
   }
   
   else if(j1 == 'P'){
       if (j2 == 'R'){
           printf("jog1");
       }
       else if (j2 == 'S'){
           printf("jog2");
       }
   }
   
   else {
       if (j2 == 'P'){
           printf("jog1");
       }
       else {
           printf("jog2");
       }
   }
}