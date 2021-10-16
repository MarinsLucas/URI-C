#include <stdio.h>
 
int main() {
    int cu,boi,bot, map, ia,total;
    scanf("%d%d%d%d%d",&cu,&boi,&bot,&map,&ia);
    total = cu*300+boi*1500+bot*600+map*1000+ia*150+225;
    printf("%d\n",total);
    return 0;
}