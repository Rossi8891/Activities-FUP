#include <stdio.h>

int main(){
 int ultron;
 int nlido;
 
 scanf("%d", &ultron);
 scanf("%d", & nlido);
 
 int i;
 i = 0;
 int soma;
 soma = 0;
 
 while(i < nlido){
     int ul;
     scanf("%d", &ul);
     if (ul == ultron){
         soma += 1;
     }
     i += 1;
 }
 
 printf("%d", soma);
 
}