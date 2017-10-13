#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("adj egy szamot:");
    scanf("%d", &x);
    {if ( x % 2 ==0)
        printf("a szam paros");
     else
        printf("a szam paratlan");
    }
    return 0;
}
