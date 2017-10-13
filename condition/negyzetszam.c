#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, eredmeny1, eredmeny2;

    printf(" Adj meg egy szamot:");
    scanf("%d", &x);
    for( ;x>=1;x--){
        y = x *x ;
         printf("%d\n",y);
         }


    return 0;
}
