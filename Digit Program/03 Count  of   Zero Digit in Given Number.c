
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0, Z_Cnt = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);

    for(Temp = No ; Temp > 0;Temp = Temp / 10)
    {
        if((Temp % 10) == 0)
        {
            Z_Cnt++;
        }
    }

    printf("\n Count of Zero  Digits  of  %d  is = %d",No,Z_Cnt);

    getch();
    return 0;
}

