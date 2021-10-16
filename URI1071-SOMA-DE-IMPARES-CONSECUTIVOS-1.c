#include <stdio.h>
 
int main() 
{
    int n1, n2, soma=0;
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        n1--;
        while(n1>n2)
        {
             n2++;
            if(n2%2!=0)
            {
                soma=soma+n2;
            }
        }
    }
    if(n1<n2)
    {
        n2--;
        while(n1<n2)
        {
            n1++;
            if(n1%2!=0)
            {
                soma=soma+n1;
            }
        }
    }
    printf("%d\n",soma);
    return 0;
}