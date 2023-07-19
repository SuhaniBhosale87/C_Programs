#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0 , i = 0;

    printf("\n^=======================================^");

    printf("\n Enter Size = ");
    scanf("%d",&i);

    printf("\n\n Pattern is => \n\n");

    for( R = 1; R <= i; R++)
    {
        for( C = 1; C <= i; C++)
        {
            if(R > C || R == C )
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

    printf("\n^=======================================^");

    getch();
    return 0;
}
