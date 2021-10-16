#include <stdio.h>

int main(){
   int c,d=0;
   float x,y,divisao;
   scanf("%d", &c);
   while(d<c){
      scanf("%f%f",&x,&y);
      if(y!=0){
         divisao = x/y;
         printf("%.1f\n", divisao);
   }
   else{
      printf("divisao impossivel\n");
   }
   d++;
   }
}