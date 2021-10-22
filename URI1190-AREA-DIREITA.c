#include <stdio.h>
 
int main() {
 
    char opera; 
    scanf("%c", &opera);
    float M[12][12];
    float soma_ou_media=0;
    int i, j; 
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
            if(i+j>=12 && i<6){
                soma_ou_media +=M[i][j];
            }
            else if(i>=6 && j > i){
                soma_ou_media +=M[i][j];
            }
        }
    }
    
    if(opera == 'M')
        soma_ou_media = soma_ou_media/30.0;
    
    printf("%.1f\n", soma_ou_media);
    return 0;
}
