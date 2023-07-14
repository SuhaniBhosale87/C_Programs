#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter Number = ");
    scanf("%d",&No);

    printf("\n ====================*******====================\n");

    printf("\n Table Of %d is =>\n ",No);

    printf("\n ====================*******====================\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d",No,i,(No * i));
    }

    printf("\n ====================*******====================\n");


    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
