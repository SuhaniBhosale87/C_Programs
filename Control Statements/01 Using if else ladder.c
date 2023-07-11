//Program To Implementation If  Statement

#include<stdio.h>
#include<conio.h>

int main()
{
    float Bill = 0.0;

    printf("\n Enter Your Balance = ");
    scanf("%f",&Bill);

    if(Bill > 1000)
    {
       printf("\n Welcome, Your Are Eligible.");
    }

    else
    {
        printf("\n You Are Not Eligible .");
    }

    getch();
    return 0;
}
