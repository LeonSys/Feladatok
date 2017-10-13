#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ora, perc, osszesperc;

    printf("mond meg hany ora:");
    scanf("%d",&ora);

    printf("es hogy hany perc:");
    scanf("%d",&perc);

    osszesperc = ora*60 + perc;


    printf("tehat osszesen %d",osszesperc);


    return 0;
}
