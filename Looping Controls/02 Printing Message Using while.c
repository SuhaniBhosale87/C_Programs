
#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,Num = 1;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    while(Cnt > 0)
    {
            printf( "\n %d INDIA",Num);
            Cnt--;
            Num++;
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}
