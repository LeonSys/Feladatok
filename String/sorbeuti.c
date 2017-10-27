#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int l= 0;
        printf("ird be a szoveget : ");
       fgets(str, sizeof str, stdin);
	   printf("a sor betui : \n");
    while(str[l]!='\0')
    {
       printf("%c  ", str[l]);
       l++;
    }
    printf("\n");
}
