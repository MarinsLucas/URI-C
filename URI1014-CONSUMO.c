#include <stdio.h>
 
int main() {
    float km,l;
    scanf("%f%f", &km,&l);
    km= km/l;
    printf("%.3f km/l\n", km);
        return 0;
}