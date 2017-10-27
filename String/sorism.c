#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sor[100];
    printf("irj be egy sort\n");
    fgets(sor,sizeof sor,stdin);


    printf("a sor amit beirtal: %s" ,sor);
    return 0;
}
