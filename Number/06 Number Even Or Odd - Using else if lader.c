#include<stdio.h>
#include<conio.h>

int main ()
{
    int Num = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\n Given Number is a Nuetral.");
    }

    else if(Num % 2 == 0)
    {
        printf("\n Given Number is a EVEN.");
    }

    else
    {
        printf("\n Given Number is a ODD.");
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;

}
