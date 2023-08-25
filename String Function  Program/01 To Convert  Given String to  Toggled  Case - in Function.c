#include<stdio.h>
#include<conio.h>

void Reverse (char ptr[])
{
    int i = 0;

    while(ptr[i] != '\0')
    {
        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
        {
            ptr[i] = ptr[i] + 32;
        }
        else if(ptr[i] >= 'a' && ptr[i] <= 'z')
        {
            ptr[i] = ptr[i] - 32;
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


    Reverse(cSrc);


    printf("\n  Given String is After Capitalization = %s ",cSrc);

    getch();
    return 0;
}
