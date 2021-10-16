#include <stdio.h>
 
int main() {
    int n,c=0,d;
    scanf("%d",&n);
    if(n%2!=0){ n--;}
    while(c<n){
        c=c+2;
        d = c*c;
        printf("%d^2 = %d\n",c,d);
    }
    return 0;
}