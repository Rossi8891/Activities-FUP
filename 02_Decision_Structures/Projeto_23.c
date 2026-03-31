#include <stdio.h>

int main(){
   int dia;
   int hr;
   int min;
   int mt;
   
   scanf("%d", &dia);
   scanf("%d", &hr);
   scanf("%d", &min);
   
   mt = (hr * 60) + min;
   
   if (dia > 1 && dia < 7){
       if (mt > 479 && mt < 720 || mt > 839 && mt < 1080){
           printf("SIM");
       }
       else {
           printf("NAO");
       }
   }
   
   else if(dia == 7 && mt > 479 && mt < 720){
       printf("SIM");
   }
   else {
       printf("NAO");
   }
}