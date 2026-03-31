int main(){
  char op;
  int d1;
  int d2;
  int res;
  
  scanf("%c", &op);
  scanf("%d", &d1);
  scanf("%d", &d2);
  
  res = (d1 + d2)%2;
  
  if (op == 'p' && res == 0 || op == 'i' && res != 00){
      printf("Venceu");
  }
  else {
      printf("Perdeu");
  }
}