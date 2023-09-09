// strcpy()

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Dig_Cnt = 0,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Dig_Cnt++;
        }
        i++;
    }

    printf("\n Count of Special Symbol in Given String is = %d ",Dig_Cnt);

    getch();
    return 0;
}
