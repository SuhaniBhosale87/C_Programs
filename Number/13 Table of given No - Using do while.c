#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 1;

    printf("\n Enter Numbers = ");
    scanf("%d",&No);

    printf("\n ====================*******====================\n");

    printf("\n Table of %d => \n",No);

    printf("\n ====================*******====================\n");

    do
    {
        printf("\n %d " , No * i);
        i++;
    }while(i <= 10);

    printf("\n ====================*******====================\n");

    printf("\n Thanks");

    getch();
    return 0;
}
