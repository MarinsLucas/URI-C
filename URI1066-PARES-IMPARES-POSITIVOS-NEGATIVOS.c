#include <stdio.h>
 
int main() {
   int c=0, a, d=0,e=0,f=0,g=0;

   while(c<5){
       scanf("%d", &a);
       if(a>0){
           d=d+1;
       }
       if(a<0){
           g=g+1;
       }
       if(a%2==0){
           e=e+1;
       }
       if(a%2!=0){
           f=f+1;
       }
       c++;
   }
    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", f);
    printf("%d valor(es) positivo(s)\n", d);
    printf("%d valor(es) negativo(s)\n", g);
    return 0;
}