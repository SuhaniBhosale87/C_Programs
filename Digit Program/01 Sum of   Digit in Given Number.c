
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,Temp = 0,dSum = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        dSum = dSum + Dig;
        Temp = Temp / 10;
    }

    printf("\n Digits Sum of  %d  is = %d",No,dSum);

    getch();
    return 0;
}

