#include <stdio.h>

int main()
{
   int cap_cest;
   int qt_banana;
   int qt_goiaba;
   int qt_manga;
   
   scanf("%d", &cap_cest);
   scanf("%d", &qt_banana);
   scanf("%d", &qt_manga);
   scanf("%d", &qt_goiaba);
   
   int total_frt;
   total_frt = qt_goiaba + qt_manga + qt_banana;
   int minutos;
   
   if (total_frt%cap_cest > 0) {
       minutos = total_frt/cap_cest + 1;
   }
   
   else {
       minutos = total_frt/cap_cest;
       
   }
   
   printf("%d\n", minutos);
  
}