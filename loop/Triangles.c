#include <stdio.h>
#include <stdlib.h>

int main()
{
      int i,j,sor;
   printf("Hany sor? : ");
   scanf("%d",&sor);
   for(i=1;i<=sor;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	   printf("\n");

   }
    return 0;
}
