#include<stdio.h>
#include<conio.h>

void UpperCASE(char Uprt[])
{
     int i = 0;

     while(Uprt[i] != '\0')
    {
        if(Uprt[i] >= 'a' && Uprt[i] <= 'z')
        {
            Uprt[i] = Uprt[i]-32;
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

    UpperCASE(cSrc);

    printf("\n  Given String is After Capitalization = %s ",cSrc);


    return 0;
}
