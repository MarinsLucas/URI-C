#include <stdio.h>

int main() {
    int linha, i, j;
    char a;
    double m[12][12], soma;
    
    scanf("%i", &linha);
    scanf(" %c", &a);
    
    for (i = 0; i < 12; i++) {
    
        for (j = 0; j < 12; j++) {
            
            scanf("%lf", &m[i][j]);
            
            if (i == linha)
                soma += m[linha][j];

        }
    }
    if (a == 'M')
        soma /= 12;
    
    printf("%.1f\n", soma);
    
    return 0;
}
