#include<stdio.h>
#include<conio.h>

void Swap(int*,int*);

int main()
{
    int N1 = 0 , N2 = 0;
    printf("\n Enter 2 Numbers is = ");
    scanf("%d%d",&N1,&N2);

    printf("\n Numbers Before Swapping =");
    printf("\n 1st  Number is = %d , \t 2nd Number is = %d",N1,N2);

    Swap(&N1,&N2);

    printf("\n Numbers After Swapping =");
    printf("\n 1st  Number is = %d , \t 2nd Number is = %d",N1,N2);


    getch();
    return 0;

}
void Swap (int *P1,int*P2)
{
    int temp = 0;

    temp =*P1;
    *P1 = *P2;
    *P2 = temp;

    return;
}
