#include <stdio.h>
 
int main() {
    int i=1, j=7, c;
    while(i<=9){
        printf("I=%d J=", i);
        printf("%d\n",j);
        j--;
        if(j<5){
            i=i+2;
            j=7;
        }
    }
 
    return 0;
}