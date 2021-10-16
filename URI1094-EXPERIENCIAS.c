#include <stdio.h>

int main(void) {
  int quantTestes, totalC=0, totalR=0, totalS=0,totalCobaias=0;
  char tipo; 
  int quantTipo;
  scanf("%d",&quantTestes);
  
  for(int i=0;i<quantTestes;i++){
    scanf("%d %c",&quantTipo, &tipo);
    if(tipo == 'C'){
      totalC+=quantTipo;
    }
    if(tipo == 'R'){
      totalR+=quantTipo;
    }
    if(tipo == 'S'){
      totalS+=quantTipo;
    }
    totalCobaias +=quantTipo;
  }
  printf("Total: %d cobaias\n", totalCobaias);
  printf("Total de coelhos: %d\n", totalC);
  printf("Total de ratos: %d\n", totalR); 
  printf("Total de sapos: %d\n", totalS);
  printf("Percentual de coelhos: %.2f %c\n", (float)totalC/totalCobaias*100, '%');
  printf("Percentual de ratos: %.2f %c\n", (float)totalR/totalCobaias*100, '%');
  printf("Percentual de sapos: %.2f %c\n", (float)totalS/totalCobaias*100, '%');
  
  return 0;
}