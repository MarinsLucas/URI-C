#include <stdio.h>
 
int main() {
    int idade, anos, meses;
    scanf("%d",&idade);
    anos = idade/365;
    idade = idade%365;
    meses = idade/30;
    idade= idade%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, idade);
    
 
    return 0;
}