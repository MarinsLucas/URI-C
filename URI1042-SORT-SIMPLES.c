#include <stdio.h>
 
void func(int n1, int n2, int n3){
    int maior=0, meio=0, menor=0;
    if(n1>=n2 && n1>=n3){
        maior = n1;
        if(n2>=n3){
            meio = n2;
            menor = n3;
        }else{
            meio = n3;
            menor = n2;
        }
    }
    if(n2>=n1 && n2>=n3){
        maior = n2; 
        if(n1>=n3){
            meio = n1;
            menor = n3;
        }else{
            meio = n3;
            menor = n1;
        }
    }    
    if(n3>=n1 && n3>=n2){
         maior = n3; 
        if(n2>=n1){
            meio = n2;
            menor = n1;
        }else{
            meio = n1;
            menor = n2;
        }
    }
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
}
int main() {
    int n1, n2, n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    func(n1,n2,n3);
    printf("%d\n%d\n%d\n",n1,n2,n3);
    return 0;
}