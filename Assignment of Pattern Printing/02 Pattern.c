
#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch =  'A';

    printf("============================== Pattern =============================\n");

    for( R = 1; R <= 5; R++)
    {
        for( C = 1; C <= 5 ;C++, ch++)
        {
            if(R >= C)
            {
                 printf(" %c ",ch);
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n\n");

    }

    printf("***************************** Thanks *******************************\n");

    getch();
    return 0;
}
