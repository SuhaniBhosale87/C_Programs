#include<stdio.h>
#include<conio.h>


int Add(int N1,int N2)
{
    int Ans = 0;

    Ans = N1 + N2;

    return Ans;
}

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Res = 0;

    printf("\n Enter 1st Numbers : ");
    scanf("%d",&No1);

    printf("\n Enter 2nd Numbers : ");
    scanf("%d",&No2);

    Res = Add( No1,No2);

    printf("\n*****************************************");

    printf("\n Addition is : %d",Res);

    printf("\n*****************************************");
    getch();
    return 0;
}

