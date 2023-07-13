#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0;
    long long int Fact = 0;

    printf("\n Enter a Number to Get its Factorial = ");
    scanf("%d",& No);

    printf("\n ==================*******==================\n\n");

    for(Temp = No, Fact = 1;Temp > 0; Temp--)
    {
        Fact *= Temp;
    }

    printf("\n\t Factorial of %d is = %lld.\n",No,Fact);

    printf("\n ==================*******==================");

    getch();
    return 0;
}
