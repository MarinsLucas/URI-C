#include <stdio.h>
 
int main() {
   int seg, min, hrs;
   scanf("%d",&seg);
   hrs = seg/3600;
   seg = seg%3600;
   min = seg/60;
   seg = seg%60;

    printf("%d:%d:%d\n", hrs, min, seg);
 
    return 0;
}