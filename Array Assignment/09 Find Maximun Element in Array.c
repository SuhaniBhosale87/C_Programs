/// Creat ,Accept,Display Array Using loop - With Macro, find Maximum number of given element in That Array

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Max = 0, Arr[size];

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Element %d =>",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

        for(i = 0;i < size;i++)
        {
            if(i==0 ||Arr[i] > Max)
            {
                Max = Arr[i];
            }
        }

        printf("\n Maximum number of Given element in that Array=> %d",Max);


    getch();
    return  0;
}
