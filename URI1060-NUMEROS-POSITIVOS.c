#include <stdio.h>
 
int main() {
  int c=0, d=0;
  float a;
   while(c<6){
       scanf("%f", &a);
       if(a>0){
           d=d+1;
       }
       c++;
   }
    printf("%d valores positivos\n", d);
    return 0;
}