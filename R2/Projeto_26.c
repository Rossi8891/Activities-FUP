#include <stdio.h>

int main(){
  int l1;
  int l2;
  int l3;
  
  scanf("%d", &l1);
  scanf("%d", &l2);
  scanf("%d", &l3);
  
  if (l1 > (l2 + l3) || l2 > (l1 + l3) || l3 > (l1 + l2)){
      printf("invalido");
  }
  
  else if (l1 == l2 && l1 == l3){
      printf("equilatero");
  }
  
  else if (l1 != l2 && l1 != l3){
      printf("escaleno");
  }
  
  else {
      printf("isosceles");
  }
}