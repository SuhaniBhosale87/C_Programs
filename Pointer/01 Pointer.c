#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 31;
    int *P = &No;
    int **q = &P;
    int ***r = &q;
    int ****m = &r;
    int *****n = &m;

    printf("\n %d",&No);
    printf("\n %d",&P);
    printf("\n %d",&q);
    printf("\n %d",&r);
    printf("\n %d",&m);
    printf("\n %d",&n);

    printf("\n************************************************\n");
    getch();

    printf("\n %d",No);
    printf("\n %d",&No);
    printf("\n %d",&P);
    printf("\n %d",*P);
    printf("\n %d",**n);
    printf("\n %d",**(&m));
    printf("\n %d",&(***m));
    printf("\n %d",****n);

    getch();
    return 0;
}
