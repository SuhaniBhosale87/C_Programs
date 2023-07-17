#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, i = 0, j = 0;

    printf("\n Enter Row Size = ");
    scanf("%d",&i);

    printf("\n Enter Column Size = ");
    scanf("%d",&j);


    printf("\n==================================*********==================================\n\n");

    for( R = 1; R <= i; R++)
    {
            for(C = 1; C <= j; C++)
            {
               if( R == 1 || R == i || C == 1 || C == j)
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
