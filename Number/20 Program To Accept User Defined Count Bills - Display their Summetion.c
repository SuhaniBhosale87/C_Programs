#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, i = 0;
    float Bill = 0, Bill_Sum = 0;

    printf("\n Enter How Many Bills Do You Have : ");
    scanf("%d",&Cnt);

    for(i = 1; i <= Cnt; i++)
    {
                printf("\n\t Enter Bill No %d = ",i);
                scanf("%f",&Bill);

                Bill_Sum = Bill_Sum +  Bill;
    }

    printf("\n Summation Of Given Bill = %0.2f ",Bill_Sum);

    getch();
    return 0;
}
