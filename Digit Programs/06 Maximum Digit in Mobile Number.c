
#include<stdio.h>
#include<conio.h>

int main()
{
   long long int Mob_No = 0,Temp = 0;

   int Dig = 0,Min= 0;

    printf("\n Enter Your Mobile Number = ");
    scanf("%lld",&Mob_No);

    Temp = Mob_No;

    Min = Temp % 10;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig < Min )
        {
            Min = Dig;
        }
        Temp = Temp / 10;

    }

    printf("\n Minimum Digits in Mobile Number is  = %d",Min);

    getch();
    return 0;
}

