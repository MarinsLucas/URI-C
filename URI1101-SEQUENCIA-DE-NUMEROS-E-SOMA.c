#include <stdio.h>
 
int main() {
    int M, N, i, soma;
    while(1==1){
        soma = 0; 
        scanf("%d%d", &M, &N);
        if(M<=0 || N <=0) return 0;
        if(M>N){
            for(i=N;i<=M;i++)
            {
                printf("%d ", i);
                soma+=i;
            }
            printf("Sum=%d\n", soma);
        }
        if(N>M){
            for(i=M;i<=N;i++)
            {
                printf("%d ", i);
                soma+=i;
            }
            printf("Sum=%d\n", soma);
        }
    }

}
