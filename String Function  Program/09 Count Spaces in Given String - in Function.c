#include<stdio.h>
#include<conio.h>

int Spaces(char SpStr[])
{
    int SPS_Cnt = 0,i = 0;

    while(SpStr[i] != '\0')
    {
        if(SpStr[i] == ' ')
        {
            SPS_Cnt++;
        }
        i++;
    }

    return SPS_Cnt;
}

int main()
{
    char cSrc[20] = {'\0'};
    int SCount = 0;

    printf("\n Enter a String : ");
    gets(cSrc);


    SCount = Spaces(cSrc);


    printf("\n Count of Spaces in Given String is = %d ",SCount);

    getch();
    return 0;
}
