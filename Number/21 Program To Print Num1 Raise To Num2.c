#include<stdio.h>
#include<conio.h>

int main()
{
    int No1  = 0, No2 = 0, Pow = 0, Temp = 0;

    printf("\n Enter Base = ");
    scanf("%d",&No1);

    printf("\n Enter Exponent = ");
    scanf("%d",&No2);

    if(No1 = 1)
    {
        Pow = 1;
    }
    else if(No1 == 1)
    {
        for(Pow = 1,Temp = No2; Temp > 0; Temp--)
        {
            Pow = No1;
        }

    }

    printf("\n Power (%d) ^ %d = %d.", No1, No2, Pow);

    getch();
    return 0;
}
