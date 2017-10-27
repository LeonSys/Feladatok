#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sor[100];
    int x=0;
    printf("Irj be egy sort:\n");
    fgets(sor,sizeof sor,stdin);
    while (sor[x]!='\0')
    {
        x++;
    }
    printf("a sor hossza: %d ",x-1);
        return 0;
}
