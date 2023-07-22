///Creat Array of 7 elements With Null [0] initilization & Accept elements Without loop Display All Elements
#include<stdio.h>
#include<conio.h>

int main ()
{
    int Arr[7] = {0};

    printf("\n Enter element 1 =>");
    scanf("%d",&Arr[0]);

    printf("\n Enter element 2 =>");
    scanf("%d",&Arr[1]);

    printf("\n Enter element 3 =>");
    scanf("%d",&Arr[2]);

    printf("\n Enter element 4 =>");
    scanf("%d",&Arr[3]);

    printf("\n Enter element 5 =>");
    scanf("%d",&Arr[4]);

    printf("\n Enter element 6 =>");
    scanf("%d",&Arr[5]);

    printf("\n Enter element 7 =>");
    scanf("%d",&Arr[6]);

    getch();
    system("cls");

    printf("\n Value of element 101 is = %d.",Arr[0]);
    printf("\n Value of element 102 is = %d.",Arr[1]);
    printf("\n Value of element 103 is = %d.",Arr[2]);
    printf("\n Value of element 104 is = %d.",Arr[3]);
    printf("\n Value of element 105 is = %d.",Arr[4]);
    printf("\n Value of element 106 is = %d.",Arr[5]);
    printf("\n Value of element 107 is = %d.",Arr[6]);

    getch();
    return 0;
}
