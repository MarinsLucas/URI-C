#include <stdio.h>
#include <math.h>
 
int main() {
    double raio,vol;
    scanf("%lf", &raio);
    vol = (4.0/3)*3.14159*pow(raio,3);
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}