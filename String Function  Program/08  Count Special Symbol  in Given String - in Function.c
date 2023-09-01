#include<stdio.h>
#include<conio.h>

int Special_Syb(int Str[])
{
    int i = 0,SP_Cnt = 0;

    while(Str[i] != '\0')
    {
        if( !(Str[i] >= 'a' && Str[i] <= 'z')&& !(Str[i] >= 'A' && Str[i] <= 'Z')&&!(Str[i] >= '0' && Str[i] <= '9'))
        {
            SP_Cnt++;
        }
        i++;
    }

    return SP_Cnt;
}

int main()
{
    char cSrc[20] = {'\0'};
    int SCnt = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    SCnt = Special_Syb(cSrc);

    printf("\n Count of Special Symbol in Given String is = %d ",SCnt);

    getch();
    return 0;
}
