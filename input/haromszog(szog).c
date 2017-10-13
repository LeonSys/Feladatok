#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int c;


    printf("add meg a haromszog 2 szoget");
    scanf("%d %d", &a, &b);
    c = 180 - (a+b);


    printf("A harmadik szog=%d",c);
    return 0;
}
