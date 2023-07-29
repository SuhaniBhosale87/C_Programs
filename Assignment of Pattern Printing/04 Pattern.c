#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch = 'A';
    printf("============================== Pattern =============================\n");

    for( R = 1,ch = 'A'; R <= 5; R++,ch++)
    {
        for( C = 1; C <= 5; C++)
        {
            if(R >= C)
            {
                printf(" %c ",ch);
            }


        }
        printf("\n\n");

    }

    printf("***************************** Thanks *******************************\n");

    getch();
    return 0;
}
