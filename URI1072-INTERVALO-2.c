#include <stdio.h>
 
int main() {
    int valor, c=0,num, in=0,out=0;
    scanf("%d",&valor);
    while(c<valor){
        scanf("%d",&num);
        if(num>=10&&num<=20){
            in++;
        }else{
            out++;
        }
        c++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}