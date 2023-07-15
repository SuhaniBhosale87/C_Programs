#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, S_Pt = 0, E_Pt = 0;

    printf("\n Enter Start point : ");
    scanf("%d",&S_Pt);

    printf("\n Enter End Point : ");
    scanf("%d",&E_Pt);

    printf("\n============================**************============================\n\n");

    if(S_Pt > E_Pt)
    {
        S_Pt = S_Pt + E_Pt;
        E_Pt = S_Pt - E_Pt;
        S_Pt = S_Pt - E_Pt;
    }

    for(R = 1; R <= 10; R++)
    {
        for(C = S_Pt ; C <= E_Pt; C++)
        {
            printf(" %3d ", R * C);
        }
        printf("\n");
    }
    printf("\n============================**************============================\n");

    getch();
    return 0;

}
