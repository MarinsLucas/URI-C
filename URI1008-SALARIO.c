#include <stdio.h>
 
int main() {
 int num;
 float sal,hr, valor;
 scanf("%d%f%f", &num,&hr,&valor);
 sal = hr*valor;
 printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, sal);
    
 
    return 0;
}