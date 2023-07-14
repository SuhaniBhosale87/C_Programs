#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 1;

    printf("\n Enter No = ");
    scanf("%d",&No);

    printf("\n ====================*******====================\n");

    printf("\n Table Of %d =>\n",No);

    printf("\n ====================*******====================\n");

    for(i = 1; i <= 10 ; i++)
    {
        printf("\n %d * %d = %d",No,i,(No * i));
    }

    printf("\n ====================*******====================\n");

    printf("\n Thanks !!!");

    getch();
    return 0;
}
