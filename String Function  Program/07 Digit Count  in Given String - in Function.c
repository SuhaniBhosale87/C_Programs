#include<stdio.h>
#include<conio.h>

int Digit(char DStr[])
{
    int i = 0, D_cnt = 0;


    while(DStr[i] != '\0')
    {
        if(DStr[i] >= '0' && DStr[i] <= '9')
        {
            D_cnt++;
        }
        i++;
    }

    return  D_cnt;
}

int main()
{
    char cSrc[20] = {'\0'};
    int Dig_Cnt = 0,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    Dig_Cnt = Digit(cSrc);


    printf("\n Count of Capital Letters in Given String is = %d ",Dig_Cnt);

    getch();
    return 0;
}
