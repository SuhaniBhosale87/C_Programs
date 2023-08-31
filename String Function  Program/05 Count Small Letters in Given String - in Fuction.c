#include<stdio.h>
#include<conio.h>

int S_Letter(char cStr[])
{
    int i = 0, Smc = 0;


    while(cStr[i] != '\0')
    {
        if(cStr[i] >= 'a' && cStr[i] <= 'z')
        {
            Smc++;
        }
        i++;
    }

    return Smc;
}
int main()
{
    char cSrc[20] = {'\0'};
    int Sm_Cnt = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    Sm_Cnt = S_Letter(cSrc);

    printf("\n Count of Small Letters in Given String is = %d ",Sm_Cnt);


    return 0;
}

