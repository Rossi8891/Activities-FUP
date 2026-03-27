#include <stdio.h>

int main(){
    int num_a;
    int num_b;
    
    scanf("%d", &num_a);
    scanf("%d", &num_b);
    
    printf("%d\n", num_a + num_b);
    printf("%d\n", num_a - num_b);
    printf("%d\n", num_a * num_b);
    printf("%.2f\n",(float) num_a / (float) num_b);
    printf("%d\n", num_a % num_b);
    
}