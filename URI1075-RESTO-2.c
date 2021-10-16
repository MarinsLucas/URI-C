#include <stdio.h>

int main() {
    int n,c=1,a;
    scanf("%d",&n);
    while(c<10000){
        if(c%n==2){
            printf("%d\n",c);
        }
        c++;
    }
    return 0;
}

