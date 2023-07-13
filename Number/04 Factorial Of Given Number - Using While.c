#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Temp = 0;
    long long int Fact = 0;

    printf("\n Enter a Number to Get its Factorial = ");
    scanf("%d",&No);

    Temp = No;
    Fact = 1;

    printf("\n ==================*******==================\n");

    while(Temp > 0)
    {
        Fact = Fact * Temp;
        Temp--;
    }

    printf("\n\t Factorial of %d is = %lld.\n",No,Fact);

    printf("\n ==================*******==================");

    getch();
    return 0;
}
