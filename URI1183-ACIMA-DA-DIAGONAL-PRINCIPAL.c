#include <stdio.h>

int main() {
    int i, j;
    char a;
    double m[12][12], soma;
    
    scanf("%c", &a);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            
            scanf("%lf", &m[i][j]);
            
            if (j > i)
                soma += m[i][j];
        }
    }
    
    if (a == 'M')
        soma /= 66.0;
    
    printf("%.1lf\n", soma);
    
    return 0;
}
