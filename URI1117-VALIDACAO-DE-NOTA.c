#include <stdio.h>
 
int main() {
    float nota1, nota2,media; 
    do{
        scanf("%f", &nota1);
        if(nota1>10 || nota1<0) printf("nota invalida\n");
    }while(nota1>10 || nota1<0);
    
    do{
        scanf("%f", &nota2);
        if(nota2>10 || nota2<0) printf("nota invalida\n");
    }while(nota2>10 || nota2<0);
    
    media = (nota1+nota2)/2.0;
    
    printf("media = %.2f\n", media);
    
    return 0;
}
