#include <stdio.h>

int main(){
  int nl;
  scanf("%d", &nl);
  
  int i;
  i = 0;
  float soma;
  soma = 0;
  float n;
  
  while(i < nl){
      scanf("%f", &n);
      soma += n;
      i += 1;
  }
  
  printf("%.2f", soma/nl);
}