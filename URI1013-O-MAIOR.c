#include <stdio.h>
 
int main() {
    int A,B,C,maiorAB,maior;
    scanf("%d%d%d", &A,&B,&C);
    maiorAB = (A+B+abs(A-B))/2;
    maior = (C+maiorAB+abs(C-maiorAB))/2;
    printf("%d eh o maior\n", maior);
 
    return 0;
}