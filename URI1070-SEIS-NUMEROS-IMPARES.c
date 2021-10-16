#include <stdio.h>
 
int main() {
int x,c=0;
    scanf("%d",&x);
    if(x%2==0){
       x++;
    }
    while(c<6){
            printf("%d\n",x);
            x=x+2;
            c++;
        }
    return 0;
}