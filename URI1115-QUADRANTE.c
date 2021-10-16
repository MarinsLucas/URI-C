#include <stdio.h>
 
int main() {
    int x, y;
    do{
        scanf("%d%d", &x,&y);
        if(x==0 && y==0){
            return 0;
        }
        if(x<0){
            if(y>0){
                printf("segundo\n");
            }else{
                printf("terceiro\n");
            }
        }else{
            if(y>0){
                printf("primeiro\n");
            }else{
                printf("quarto\n");
            }
        }
    }while(1==1);
}