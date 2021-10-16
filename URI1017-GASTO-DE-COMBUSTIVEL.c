#include <stdio.h>
 
int main() {
    int tempo, vel;
    float dist;
    scanf("%d%d", &tempo,&vel);
    dist = vel*tempo;
    dist= dist/12.0;
    printf("%.3f\n", dist);
 
    return 0;
}