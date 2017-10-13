#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,j,x,sor,k,t=1;
   printf("sorok szama : ");
   scanf("%d",&sor);
   x=sor+4-1;
   for(i=1;i<=sor;i++)
   {
         for(k=x;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    x--;

   }
    return 0;
}
