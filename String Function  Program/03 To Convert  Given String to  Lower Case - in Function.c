#include<stdio.h>
#include<conio.h>

void LowerCase(char LPtr[])
{
    int i = 0;

    while(LPtr[i] != '\0')
    {
        if(LPtr[i] >= 'A' && LPtr[i] <= 'Z')
        {
            LPtr[i] = LPtr[i] + 32;
        }

        i++;
    }

    return;
}

int main()
{
    char cSrc[20] = {'\0'};


    printf("\n Enter a String : ");
    gets(cSrc);

    LowerCase(cSrc);

    printf("\n  Given String is After Capitalization = %s ",cSrc);

    getch();
    return 0;
}
