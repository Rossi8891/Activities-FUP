#include <stdio.h>

int raiz(int n){
    int res;
    int i = n;
    while (i > 0){
        if (n/i == i){
            res = i;
        }
        i -=1;
    }
    return res;
}

int main(){
   int n;
   scanf("%d", &n);
   if (n > 0){
      printf("%d", raiz(n));  
   }
   
   else{
       printf("%d", 0);
   }
  
}