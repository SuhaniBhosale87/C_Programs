/// Creat ,Accept,Display Array Using loop - With Macro,
///find Count of Odd elements in That Array

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0,Cnt = 0,Arr[size];

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Element %d => ",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

    for(i = 0;i < size;i++)
    {
        if(Arr[i] % 2 == 1)
        {
            Cnt++;
        }
    }

    printf("\n Count of Odd number in given  Array is : %d",Cnt);

    getch();
    return 0;
}
