/// Creat ,Accept,Display Array Using loop - With Macro,
///find Count of Even & Odd Zero elements in That Array

#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, E_no = 0, O_no = 0, Z_no = 0, Arr[size];

    for(i = 0;i < size;i++)
    {
        printf("\n Enter Element %d => ",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

    for(i = 0;i < size;i++)
    {
        if(Arr[i]%2  == 0)
        {
            E_no++;
        }
    }

    for(i = 0;i < size;i++)
    {
        if(Arr[i]%2 == 1)
        {
            O_no++;
        }
    }

    for(i = 0;i < size;i++)
    {
        if(Arr[i]  == 0)
        {
            Z_no++;
        }
    }
    printf("\n Count of Even number in given Array is : %d",E_no);
    printf("\n Count of Odd number in given Array is : %d",O_no);
    printf("\n Count of Zero number in given Array is : %d",Z_no);

    getch();
    return 0;
}
