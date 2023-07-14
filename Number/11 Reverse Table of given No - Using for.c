#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number = ");
    scanf("\%d",&No);

    printf("\n ====================*******====================\n");

    printf("\n Table of %d is  \n ", No);

    printf("\n ====================*******====================");

    for(i = 10; i >= 1; i--)
    {
        printf("\n %d",No * i);
    }

    printf("\n ====================*******====================");

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}
