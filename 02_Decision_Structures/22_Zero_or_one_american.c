#include <stdio.h>

int main() {
	int d1;
	int d2;
	int d3;
	int d4;

	scanf("%d", &d1);
	scanf("%d", &d2);
    scanf("%d", &d3);
    scanf("%d", &d4);
    
    int soma;
    soma = d1 + d2 + d3 + d4;
    
    if (soma == 0){
        printf("nenhum");
    }
    
    else if (soma - 1 == 0 || soma % 4 == 1){
        printf("jog1");
    }
     else if (soma - 2 == 0 || soma % 4 == 2){
        printf("jog2");
    }
     else if (soma - 3 == 0 || soma % 4 == 3){
        printf("jog3");
    }
     else{
        printf("jog4");
    }
   
    
}