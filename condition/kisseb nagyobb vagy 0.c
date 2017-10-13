#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Adj egy szamot:");
    scanf("%d", &x);
    {if (x>0)
        printf("1");
    if (x==0)
        printf("0");
    if (x<0)
        printf("-1");}
    return 0;
}
