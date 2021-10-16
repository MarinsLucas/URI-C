#include <stdio.h>
 
int main() {
    int num, c;
    scanf("%d",&num);
    for(c=1;c<=10;c++){
        printf("%d x %d = %d\n", c, num, c*num);
    }
    return 0;
}