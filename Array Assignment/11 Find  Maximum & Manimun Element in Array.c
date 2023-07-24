/// Creat ,Accept,Display Array Using loop - With Macro,
///find  Maximum & Mainimum number of given element in That Array

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Min = 0,Max = 0, Arr[size];

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Element %d =>",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

        for(i = 0;i < size;i++)
        {
            if(Arr[i] > Max || i==0)
            {
                Max = Arr[i];
            }

            if(Arr[i] < Min || i==0 )
            {
                Min = Arr[i];
            }
        }



        printf("\n Maximum number of Given  Array=> %d",Max);

        printf("\n Minimum number of Given  Array=> %d",Min);

    getch();
    return  0;
}
