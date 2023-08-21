
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dCnt = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);

    while(No > 0)
    {
        No = No / 10;

        dCnt++;
    }

    printf("\n Digits Count in given Number = %d ",dCnt);

    getch();
    return 0;
}

