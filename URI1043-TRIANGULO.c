#include <stdio.h>
#include<math.h>
int main() {
    double A, B, C, aux;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(C<B+A && B<C+A && A < B+C){
       aux=A+B+C;
       printf("Perimetro = %.1lf\n",aux);
    }else{
       aux=((A+B)*C)/2;
       printf("Area = %.1lf\n",aux);
    }
    return 0;
}
