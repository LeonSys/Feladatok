#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,sor,y;

    printf(" hany sor legyen");
    scanf("%d", &sor);



    for (x=1;x<=sor;x++)
    {
        for (y=1;y<=x;y++)
            printf("%d",x);
            printf("\n");
    }

    return 0;
}
