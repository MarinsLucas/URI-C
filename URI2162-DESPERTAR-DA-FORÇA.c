#include <stdio.h>

int main() {
    int n, m, linha, coluna, flag = 1;
    scanf("%d %d", &n, &m);
    
    int matriz[n][m];
    for (linha = 0; linha < n; linha++)
        for (coluna = 0; coluna < m; coluna++)
            scanf("%i", &matriz[linha][coluna]);

    for (linha = 1; linha < n - 1; linha++) {
        for (coluna = 1; coluna < m - 1; coluna++) {
            if (matriz[linha][coluna] == 42 && matriz[linha-1][coluna] == 7
            && matriz[linha+1][coluna] == 7 && matriz[linha][coluna-1] == 7 
            && matriz[linha][coluna+1] == 7 && matriz[linha-1][coluna-1] == 7
            && matriz[linha-1][coluna+1] == 7 && matriz[linha+1][coluna-1] == 7
            && matriz[linha+1][coluna+1] == 7) {
                printf("%i %i\n", linha+1, coluna+1);
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("0 0\n");

    return 0;
}
