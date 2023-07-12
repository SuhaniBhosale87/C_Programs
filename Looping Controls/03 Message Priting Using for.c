#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0;

    printf("\n Enter Count = ");
    scanf("%d",&Cnt);

    for ( No =  1 ; Cnt > 0; No++,Cnt--)
    {
            printf("\n %d INDIA",No);
    }

    printf("\n\n Thanks!!!");

    getch();
    return 0;
}

