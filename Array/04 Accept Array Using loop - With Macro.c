#include<stdio.h>
#include<stdlib.h>
#define Count 8

int main()
{
    int Arr[Count] = {25};
    int i = 0;

    //Displaying Array Elements
    for(i = 0; i < Count; i++)
    {
        printf("\n Value of RollNo %d = %d.",i+101,Arr[i]);
    }

    getch();

    system("cls");

    printf("\n Enter Array Element => \n\n");


    for(i = 0; i < Count; i++)
    {
        printf("\n Enter Element [%d] = ",i+101);
        scanf("%d",&Arr[i]);
    }
    system("cls");

    int Search = 0;

    printf("\n Enter Element to Search = ");
    scanf("%d",&Search);

    for(i = 0; i < Count; i++)
    {
        if(Search == Arr[i])
        {
            break;
        }
    }
    if(i == Count)
    {
        printf("\n Given Element is not Available in entered arry...");
    }
    else
    {
         printf("\n  Element %d Found at Location %d.",Search,i+1);
    }
    printf("\n\n Press any key to Continue...");

    getch();
    return 0;
}

