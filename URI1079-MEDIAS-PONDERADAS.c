#include <stdio.h>
 
int main() {
    int quant,c; 
    scanf("%d",&quant);
    double n1,n2,n3, media;
    for(c=0;c<quant;c++){
        scanf("%lf%lf%lf",&n1,&n2,&n3);
        media = (n1*2+n2*3+n3*5)/10;
        printf("%.1lf\n",media);
    }
    return 0;
}