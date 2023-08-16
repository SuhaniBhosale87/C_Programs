
#include<stdio.h>
#include<conio.h>

int main()
{
   long int Mob_No = 0,Temp = 0;

   int Dig = 0,O_cnt= 0;

    printf("\n Enter Your Mobile Number = ");
    scanf("%ld",&Mob_No);

    Temp = Mob_No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig % 2 == 1 && Dig != 0 )
        {
           O_cnt++;
        }
        Temp = Temp / 10;

    }

    printf("\n Odd Digits in Mobile No = %d",O_cnt);

    getch();
    return 0;
}

