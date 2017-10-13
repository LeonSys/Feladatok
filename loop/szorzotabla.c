#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int eredmeny;

    printf("Kerek egy szamot");
    scanf("%d", &x);
    for (y=0;y<=10;y++){

    eredmeny = x * y;
    printf("%d x %d = %d\n",x, y, eredmeny);}


    return 0;
}
