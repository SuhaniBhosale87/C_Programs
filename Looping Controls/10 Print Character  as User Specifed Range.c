#include<stdio.h>
#include<conio.h>

int main()
{
    char S_pt = '\0', E_pt = '\0';

    printf("\n Enter Starting Letter  : ");
    S_pt = getche();

    printf("\n Enter Ending letter : ");
    E_pt = getche();

    printf("\n************==============************");
    if(S_pt < E_pt)
    {
            for(; S_pt <= E_pt ; S_pt++ )
            {
                printf("\n %c", S_pt);
            }

    }
    else
    {
            for(; S_pt >= E_pt ; S_pt-- )
            {
                printf("\n %c", S_pt );
            }
    }

    printf("\n************==============************");

    getch();
    return 0;
}
