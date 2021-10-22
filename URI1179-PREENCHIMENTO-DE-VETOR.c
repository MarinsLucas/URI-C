#include <stdio.h>
 
int main() {
    int par[5], impar[5];
    int parindex=0, imparindex=0; 
    int i, j,num; 
    for(i = 0; i<15;i++)
    {
        scanf("%d" ,&num);
        if(num%2== 0)
        {
            par[parindex] = num;
            parindex++;
        }
        else
        {
            impar[imparindex] = num;
            imparindex++;
        }
        
        if(imparindex > 4)
        {
            for(j=0; j<5; j++)
            {
                printf("impar[%d] = %d\n", j,  impar[j]);
            }
            imparindex = 0; 
        }
        
        if(parindex > 4)
        {
            for(j=0; j<5; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
            parindex = 0; 
        }
    }
    
    if(imparindex!= 0)
    {
        for(i = 0; i<imparindex;i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    }
    if(parindex!= 0)
    {
        for(i = 0; i<parindex;i++)
            printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}
