// strcpy()

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Sm_Cnt = 0,Cap_Cnt =0,Dig_Cnt = 0,Sp_Cnt = 0,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            Sm_Cnt++;
        }
        else if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            Cap_Cnt++;
        }
        else if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Dig_Cnt++;
        }
        else
        {
            Sp_Cnt++;
        }
        i++;
    }

    printf("\n Count of Small Letters in Given String is   = %d ",Sm_Cnt);
    printf("\n Count of Capital Letters in Given String is = %d ",Cap_Cnt);
    printf("\n Count of  Digits in Given String is         = %d ",Dig_Cnt);
    printf("\n Count of SpecialSymbol in Given String is   = %d ",Sp_Cnt);


    getch();
    return 0;
}
