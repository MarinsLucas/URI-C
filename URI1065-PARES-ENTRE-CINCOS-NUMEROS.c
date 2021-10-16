#include <stdio.h>
 
int main() {
   int c=0, a, d=0;
   
   while(c<5){
       scanf("%d", &a);
       if(a%2==0){
           d=d+1;
       }
       c++;
   }
    printf("%d valores pares\n", d);
    return 0;
}