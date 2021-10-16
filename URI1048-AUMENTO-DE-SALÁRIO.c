#include <stdio.h>
 
int main() {
    float sal, ajuste, novoSalario;
    scanf("%f", &sal);
    if(sal<=400){
      novoSalario = sal*1.15;
      ajuste = novoSalario - sal;
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",  novoSalario, ajuste);
    }
     if(sal>400 && sal<=800){
      novoSalario = sal*1.12;
      ajuste = novoSalario - sal;
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",  novoSalario, ajuste);
    }
     if(sal>800 && sal<=1200){
      novoSalario = sal*1.10;
      ajuste = novoSalario - sal;
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",  novoSalario, ajuste);
    }
     if(sal>1200 && sal<=2000){
      novoSalario = sal*1.07;
      ajuste = novoSalario - sal;
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",  novoSalario, ajuste);
    }
     if(sal>2000){
      novoSalario = sal*1.04;
      ajuste = novoSalario - sal;
      printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",  novoSalario, ajuste);
    }
    return 0;
}