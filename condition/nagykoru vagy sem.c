#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Add meg a korod:");
    scanf("%d", &x);
    {
        if (x>=18)
        printf("nagykoru vagy szavazhatsz");
    else
        printf("kiskoru vagy nem szavazhatsz");
        }

    return 0;
}
