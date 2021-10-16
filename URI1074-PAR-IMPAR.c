#include <stdio.h>
 
int main() {
    int num,contador=0,parimpar;
    scanf("%d",&num);
    for(contador=0;contador<num;contador++){
        scanf("%d", &parimpar);
        if(parimpar==0){
            printf("NULL\n");
            continue;
        }
        if(parimpar%2==0){
            printf("EVEN ");
        }else{
            printf("ODD ");
        }
        if(parimpar>0){
            printf("POSITIVE\n");
        }else{
            printf("NEGATIVE\n");
        }
    }
    return 0;
}