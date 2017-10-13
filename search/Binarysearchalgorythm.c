#include <stdio.h>
#include <stdlib.h>


int main()
{
   int a,b, keresett, sor[100];

   printf("add meg hany szamot tartalmazzon a sor");
   scanf("%d",&a);

   printf("Adj meg %d szamot",a);
   for(b=0;b<a;b++)
    scanf("%d",&sor[b]);

   printf("Add meg a keresett szamot");

    scanf("%d" ,&keresett);


    for (b=0; b<a; b++)
    {
        if (sor[b] == keresett) {
            printf("a %d szam a %d  helyen van", keresett, b+1);
           break; }

     }
    if (b==a)
        printf("nincs a sorban ilyen elem");



   return 0;

}
