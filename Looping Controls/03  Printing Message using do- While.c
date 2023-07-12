
#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 ,Num = 1;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    do
    {
            printf( "\n %d INDIA",Num);
            Cnt--;
            Num++;
    }while(Cnt > 0);

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
