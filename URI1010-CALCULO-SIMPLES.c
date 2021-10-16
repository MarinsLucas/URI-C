#include <stdio.h>
 
int main() {
    int num1, num2,q1,q2;
    float val1,val2,total;
    scanf("%d%d%f", &num1, &q1, &val1);
    scanf("%d%d%f", &num2, &q2, &val2);
    total = q1*val1+q2*val2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}