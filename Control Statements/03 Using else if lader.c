#include<stdio.h>
#include<conio.h>

int main()
{
    float Amount = 0.0;
    {
        printf("\n Enter Your Account Balance = ");
        scanf("%f",&Amount);
    }
    if(Amount > 1000)
    {
        printf("\n\n Welcome to Mall !!!");

        if(Amount > 10000)
        {
            printf("\n\n\t You can Be Prime Costmer Of This Mall. ");
        }

    }
    else
    {
        printf("\n\n\t Minimum Balance required to Shop Here is 1000+.\n");

        if(Amount > 500)
        {
            printf("\n\t But You Can Visit Our Outlet At Corner !!!\n");
        }
        else
        {
            printf("\n\t You are Not Eligible .");
        }
    }

    printf("\n\t Thanks For Visit !!!");
    getch();
    return 0;
}
