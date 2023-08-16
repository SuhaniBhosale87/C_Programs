
#include<stdio.h>
#include<conio.h>

int main()
{
   long long int Mob_No = 0,Temp = 0;

   int Dig = 0,Max= 0;

    printf("\n Enter Your Mobile Number = ");
    scanf("%lld",&Mob_No);

    Temp = Mob_No;1

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig > Max )
        {
            Max = Dig;
        }
        Temp = Temp / 10;

    }

    printf("\n Minimum Digits in Mobile Number is  = %d",Max);

    getch();
    return 0;
}

