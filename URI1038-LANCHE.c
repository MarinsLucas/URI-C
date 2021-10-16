#include<stdio.h>

int main(){
  int cod, quant;
  float preco;
  scanf("%d%d", &cod, &quant );
  switch(cod){
    case 1: preco = 4.0*quant;
          break;
    case 2: preco = 4.5*quant;
      break;
    case 3: preco = 5.0*quant;
      break;
    case 4: preco = 2.0*quant;
      break;
    case 5: preco = 1.50*quant;
      break;
  }
  printf("Total: R$ %.2f\n", preco);
  return 0;
}