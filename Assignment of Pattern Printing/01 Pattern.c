#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0 , X = 0;
    char ch ='A';

    printf("\n Enter Size For Pattern : ");
    scanf("%d",&X);

    printf("============================== Pattern =============================\n");

    for( R = 1, ch = 'A'; R <= X; R++)
    {
        for( C = 1; C <= X ;C++)
        {
            if(R >= C)
            {
                printf(" %c ",ch);
                ch++;
            }
        }
        printf("\n");

    }

    printf("***************************** Thanks *******************************\n");

    getch();
    return 0;
}
