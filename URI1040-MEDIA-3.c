#include <stdio.h>
 
int main() {
    float n1,n2,n3,n4,media,n5, media2;
    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    media = (n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1f\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(media<5){
        printf("Aluno reprovado.\n");
    }
    if(media>=5 && media<=7){
    printf("Aluno em exame.\n");
    printf("Nota do exame: ");
    scanf("%f",&n5);
    printf("%.1f\n", n5);
    media2 = (media+n5)/2;
        if(media2>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media2);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media2);
        }
    }
    
    return 0;
}