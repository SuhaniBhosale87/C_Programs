#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, i = 1,x = 0;

    printf("\n Enter size For pattern => ");
    scanf("%d",&x);

    printf("============================== Pattern =============================\n");

    for( R = 1, i = 15; R <= x; R++)
    {
        for( C = 1; C <= x; C++)
        {
            if(R >= C)
            {
               printf(" %-3d ",i);
               i = i+15;
            }

        }
        printf("\n\n");

    }

    printf("***************************** Thanks *******************************\n");

    getch();
    return 0;
}
