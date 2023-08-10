#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, i = 1;
    printf("============================== Pattern =============================\n");

    for( R = 1; R <= 5; R++)
    {
        for( C = 1; C <= R; C++)
        {
            printf(" %d ",i);
            i++;
        }
        printf("\n\n");

    }

    printf("***************************** Thanks *******************************\n");

    getch();
    return 0;
}
