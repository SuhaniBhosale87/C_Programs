#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;

    printf("\n============================**************============================\n\n");

    for(R = 1; R <= 10; R++)
    {
        for(C = 5; C <= 10; C++)
        {
            printf(" %3d ", R * C);
        }
        printf("\n");
    }
    printf("\n============================**************============================\n");

    getch();
    return 0;

}

