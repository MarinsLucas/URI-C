#include <stdio.h>
int main()
{
    int entrada;
    double valor, cent1;
    int a, b, c, d, e, f, cent;
    int a1, a2, a3, a4, a5,a6;
    scanf("%lf", &valor);
    entrada = valor;
    a = entrada/100;
    b = (entrada%100)/50;
    c = ((entrada%100)%50)/20;
    d = (((entrada%100)%50)%20)/10;
    e = ((((entrada%100)%50)%20)%10)/5;
    f = (((((entrada%100)%50)%20)%10)%5)/2;
    a1=(((((entrada%100)%50)%20)%10)%5)%2;
    

    cent = (valor - entrada)*100;
    a2 = (cent%100)/50;
    a3 = ((cent%100)%50)/25;
    a4 = (((cent%100)%50)%25)/10;
    a5 = ((((cent%100)%50)%25)%10)/5;
    a6 = ((((cent%100)%50)%25)%10)%5;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", a1);
    printf("%d moeda(s) de R$ 0.50\n", a2);
    printf("%d moeda(s) de R$ 0.25\n", a3); 
    printf("%d moeda(s) de R$ 0.10\n", a4); 
    printf("%d moeda(s) de R$ 0.05\n", a5); 
    printf("%d moeda(s) de R$ 0.01\n", a6); 
    
    return 0;
}
