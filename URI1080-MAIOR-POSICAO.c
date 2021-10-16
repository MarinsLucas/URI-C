#include <stdio.h>
 
int main() {
    int vet[100];
    int i,maior, pos;
    for(i=0;i<100;i++){
        scanf("%d",&vet[i]);
    }
    maior=vet[0];
    pos = 0;
    for(i=0;i<100;i++){
        if(vet[i]>maior){
            maior = vet[i];
            pos = i+1;
        }
    }
    printf("%d\n%d\n",maior, pos);
    return 0;
}