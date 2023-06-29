// Program To Implement scanf Function

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;
    float Dist = 0.0;
    {

        printf("\n Enter a Number = %d.\t Distance = %0.2f.\a",Num,Dist);

        printf("\n Enter a Number = ");
        scanf("%d",&Num);

        printf("\n Enter a Distance = ");
        scanf("%f",&Dist);

    }
    getch();

    printf("\n Enter a Number = %d.\t Distance = %0.2f.\a",Num,Dist);

    getch();
    return 0;

}


