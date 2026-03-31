#include <stdio.h>

int main(){
    int velo;
    int tempo;
    float consumo;
    
    scanf("%d", &velo);
    scanf("%d", &tempo);
    scanf("%f", &consumo);
    
    float distancia;
    distancia = tempo/60.0 * velo;
    float desempenho;
    desempenho = distancia/consumo;
    printf("%.2f\n", desempenho);
    
}