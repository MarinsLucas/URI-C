#include <stdio.h>
 
int main() {
 
    char opera; 
    scanf("%c", &opera);
    float M[12][12];
    float soma_ou_media=0;
    int i, j, num=0; 
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
            if(i+j>=12){
                soma_ou_media +=M[i][j];
                num++;
            }
        }
    }
    
    if(opera == 'M')
        soma_ou_media = soma_ou_media/num;
    
    printf("%.1f\n", soma_ou_media);
    return 0;
}
