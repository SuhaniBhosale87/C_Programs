/// Creat ,Accept,Display Array Using loop - With Macro, Sreach Given element in Array & return its Location if Found

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, shr = 0, Arr[size];

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Element %d =>",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

    printf("\n Enter element to be Searched :");
    scanf("%d",&shr);

        for(i = 0;i < size;i++)
        {
            if(shr == Arr[i])
            {
                break;
            }
        }
    if(i == size)
    {
        printf("\n Entered element not found in given Array.");
    }
    else
    {
        printf("\n Entered element found at Location => %d",i+1);
    }

    getch();
    return  0;
}
