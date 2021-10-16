#include <stdio.h>
 
int main() {
    float sal;
    scanf("%f", &sal);
    if(sal<=2000){
        printf("Isento\n");
    }
    if(sal>2000 && sal<=3000){
        sal= sal - 2000;
        sal = sal*0.08;
        printf("R$ %.2f\n", sal);
    }
    if(sal>3000 && sal<=4500){
        sal = sal - 3000;
        sal = sal * 0.18;
        sal = sal+80;
        printf("R$ %.2f\n", sal);
    }
     if(sal>4500){
        sal = sal - 4500;
        sal = sal * 0.28;
        sal = sal+80+270;
        printf("R$ %.2f\n", sal);
    }
    return 0;
}