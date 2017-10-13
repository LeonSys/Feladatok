#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x;
 printf("Adj meg egy szamot 1-7 ig");
 scanf("%d", &x);
 if (x==1)
    printf("Hetfo");
  if  (x==2)
    printf("kedd");
    if   (x==3)
    printf("szerda");
    if   (x==4)
    printf("csutortok");
    if  (x==5)
    printf("pentek");
    if   (x==6)
    printf("szombat");
    if   (x==7)
    printf("vasarnap");

    if (x>7)
        printf("Mondtam hogy 1 és 7 kozott kezd elorol");






    return 0;
}
