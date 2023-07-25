#include<stdio.h>
#include<conio.h>

void Find_Max(int*,int*,int*); ///Protocall

int main ()
{
    int No1 = 0, No2 = 0,Max = 0;

    printf("\n Enter 2 Numbers is = ");
    scanf("%d %d",&No1,&No2);

    Find_Max(&No1,&No2,&Max);

    if(Max == -2)
    {
        printf("\n Invalid input");
    }
    else if(Max == -1)
    {
        printf(" Given Numbers is Equal");
    }
    else
    {
        printf("\n Maximum Number is = %d",Max);
    }

    getch();
    return 0;

}
void Find_Max(int*P1,int*P2,int*P3)
{
    if( *P1 < 0 || *P2 <= 0)
    {
        *P3 = -2;
    }
     if(*P1  == *P2)
    {
        *P3 = -1;
    }
    else if (*P1 > *P2 )
    {
        *P3 = *P1;
    }
    else
    {
        *P3 = *P2;
    }

    return ;
}
