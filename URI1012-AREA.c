#include <stdio.h>
 
int main() {
    double A,B,C;
    scanf("%lf%lf%lf", &A, &B, &C);
    
    double areaTriangulo;
    areaTriangulo = A*C/2;
    double areaCirculo;
    areaCirculo = C*C*3.14159;
    double areaTrap;
    areaTrap = ((A+B)*C)/2;
    double areaQuadr;
    areaQuadr=B*B;
    double areaRet;
    areaRet = A*B;
    
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrap);
    printf("QUADRADO: %.3lf\n", areaQuadr);
    printf("RETANGULO: %.3lf\n", areaRet);
    return 0;
}