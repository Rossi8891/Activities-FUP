#include <stdio.h>

int main()
{
  int segundos;
  
  scanf("%d", &segundos);
  
  int horas;
  int minutos;
  
  horas = segundos/3600;
  minutos = (segundos%3600)/60;
  segundos = ((segundos%60)%60);
  
  printf("%d:%d:%d", horas, minutos, segundos);
}