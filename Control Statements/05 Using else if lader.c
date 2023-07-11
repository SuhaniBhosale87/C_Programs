#include<stdio.h>
#include<conio.h>

int main()
{
    float Bal = 0.0;
    {
        printf("\n Enter Your Balance = ");
        scanf("%f",&Bal);
    }
    if(Bal > 10000)
    {
        printf("\n\n Welcome to Mall !!!");
        printf("\n\n\t You can Be Prime Costmer Of This Mall. ");
        printf("\n You Can Go to Counter Number 7 For Prime Offers. ");

    }
    else if(Bal > 7000)
    {
        printf("\n\n Welcome To Mall !!!");
        printf("\n\n\ You Can Enjoy Every Mall. ");
    }
    else if(Bal > 1000)
    {
        printf("\n\n Welcome To Mall !!!");
        printf("\n\n You Can Shop Only at Ground Floar. ");
    }
    else
    {
        printf("\n\n\t You Are Not Eligible ");
        printf("\n\n\t Minimum Balance required to Shop Here is 1000+.\n");
    }

    printf("\n\t Thanks For Visit !!!");
    getch();
    return 0;
}
