#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int fakt=1;

    printf("Adj egy szamot:");
    scanf("%d",&x);
    for (y=1;y<=x;++y)
    {
       fakt *=y;
    }


    printf("%d", fakt);

    return 0;
}
