#include <stdio.h>
 
int main() {
    double A,B,C,MED;
    scanf("%lf%lf%lf", &A,&B,&C);
    MED = (2*A+3*B+5*C)/10;
    printf("MEDIA = %.1lf\n", MED);

 
    return 0;
}