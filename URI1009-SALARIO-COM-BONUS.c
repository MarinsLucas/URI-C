#include <stdio.h>
 
int main() {
    char nome[64];
    double sal, totalVendas;
    scanf("%s%lf%lf", &nome, &sal, &totalVendas);
    totalVendas=totalVendas*0.15;
    sal=sal+totalVendas;
    printf("TOTAL = R$ %.2lf\n", sal);
    return 0;
}