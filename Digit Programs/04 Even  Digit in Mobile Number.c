
#include<stdio.h>
#include<conio.h>

int main()
{
   long long int Mob_No = 0,Temp = 0;

   int Dig = 0,E_cnt= 0;

    printf("\n Enter Your Mobile Number = ");
    scanf("%lld",&Mob_No);

    Temp = Mob_No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig % 2 == 0 && Dig != 0 )
        {
            E_cnt++;
        }
        Temp = Temp / 10;

    }

    printf("\n Even Digits in Mobile No = %d",E_cnt);

    getch();
    return 0;
}

