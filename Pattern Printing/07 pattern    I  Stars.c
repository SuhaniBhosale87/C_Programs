#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0 , i = 0;

    printf("\n==================================*********==================================\n\n");

    printf("\n Enter Row Count and Column Count Geting Odd Number = ");
    scanf("%d",&i);

    printf("\n==================================*********==================================\n\n");

    for( R = 1; R <= i; R++)
    {
            for(C = 1; C <= i ; C++)
            {
                 if( R == 1 ||  R == i ||  C== i/2 + 1 )
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
    }

    printf("\n==================================*********==================================\n");

    getch();
    return 0;


}
