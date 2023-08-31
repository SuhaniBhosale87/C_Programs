#include<stdio.h>
#include<conio.h>

int C_Letter(char CStr[])
{
    int i = 0, C_cnt = 0;


    while(CStr[i] != '\0')
    {
        if(CStr[i] >= 'A' && CStr[i] <= 'Z')
        {
            C_cnt++;
        }
        i++;
    }

    return  C_cnt;
}

int main()
{
    char cSrc[20] = {'\0'};
    int Cap_Cnt = 0,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    Cap_Cnt = C_Letter(cSrc);


    printf("\n Count of Capital Letters in Given String is = %d ",Cap_Cnt);

    getch();
    return 0;
}
