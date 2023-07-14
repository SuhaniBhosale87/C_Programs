// Number Positive Or Negative - Using if else.c
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&Num);

    if(Num > 0)
    {
        printf("\n Welcome,You Have Entered a Positive Number.");
    }
    else
    {
        printf("\n Welcome, You Have Entered a Negative Number ");
    }


    printf("\n Thanks !!!.");

    getch();
    return 0;
}

