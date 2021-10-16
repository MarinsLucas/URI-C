#include <stdio.h>
 
int main() {
    int x,d=1;
    scanf("%d",&x);
    while(d<=x){
        printf("%d\n", d);
        d=d+2;
    }
    return 0;
}