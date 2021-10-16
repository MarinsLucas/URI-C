#include <stdio.h>
#include<string.h>
 
int main() {
    int quantTeste, cifra;
    char letras[50];
    scanf("%d", &quantTeste);
    for(int i=0;i<quantTeste;i++){
         scanf("%s", letras);
         scanf("%d", &cifra);
           for(int j = 0; j < 50; j++){
                    if(letras[j] == '\0') break;
                    if((letras[j] - cifra) < 65) printf("%c", (letras[j] - cifra)+ 26);
                    else printf("%c", (letras[j] - cifra));
            }
            printf("\n");     
    }
    return 0;
}