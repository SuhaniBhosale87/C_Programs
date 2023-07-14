#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 1;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    printf("\n Table of %d is =>  \n",No);

    printf("\n**********************************************");

    while(i <= 10)
    {
        printf("\n %3d ", No * i);
        i++;
    }

    printf("\n**********************************************");

    printf("\n Thanks ");

    getch();
    return 0;
}
