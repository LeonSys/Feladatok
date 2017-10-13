#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Adj egy szamot:");
    scanf("%d", &x);

    {if (x>0)
    printf("a szam pozitiv");
    else
    printf("a szam negativ");}
    return 0;
}
