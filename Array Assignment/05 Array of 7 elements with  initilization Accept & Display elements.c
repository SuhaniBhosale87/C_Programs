///create Array of 7 with Null[0] initilization & Display All Elements with loop

#include<stdio.h>
#include<conio.h>

int main ()
{
    int i = 0 ,Arr[7] = {};

    for(i = 0 ; i < 7 ;i++)
    {
        printf("\n Enter element %d => ",i+1 );
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

     for(i = 0 ; i < 7 ;i++)
     {
         printf("\n Value element %d is = %d.",i,Arr[i]);
     }

    getch();
    return 0;
}
