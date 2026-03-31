#include <stdio.h>


int main(){
    
  float c1;
  char c2;
  float vr;
  
  scanf("%f", &c1);
  scanf(" %c", &c2);
  scanf("%f", &vr);
  
  if (c1 == vr){
      printf("primeiro");
  }
  
  else if ((c1 > vr && c2 == 'M') || (c1 < vr && c2 == 'm')){
      printf("primeiro");
  }
  
  else {
      printf("segundo");
  }
  
}