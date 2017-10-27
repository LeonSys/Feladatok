#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int ko=1,papir=2,ollo=3;
    int player,gep;
    printf("Ez egy ko papir ollo jatek!!!\n");
    printf("--------------------------------\n");
    printf("Mond mit szeretnél mutatni\n ko=1\n papir=2\n ollo=3\n Ird be a szamat: ");
    scanf("%d",&player);
    printf("A valasztottad: %d\n",player);
    printf("\nMost a gep sorsol egyet\n");
    gep = rand() %3+1;
    printf("\nA gep a %d -t valasztotta\n",gep);

    if (gep==player){
            printf("\nDontetlen\n");}

    else if (gep==1 && player ==3){
            printf("\nVesztettel\n");}


    else if (gep==1 && player ==2){
            printf("\nNyertel\n");}

    else if (gep==2 && player ==1){
            printf("\nVesztettel\n");}

    else if (gep==2 && player ==3){
            printf("\Nyertel\n");}

    else if (gep==3 && player ==2){
            printf("\nVesztettel\n");}

    else if (gep==3 && player ==1){
            printf("\nNyertel\n");}
    return 0;
}
