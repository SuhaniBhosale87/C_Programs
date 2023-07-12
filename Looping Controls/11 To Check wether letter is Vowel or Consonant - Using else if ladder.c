#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    if(ch == 'a' || ch == 'A'|| ch == 'e' || ch == 'E'|| ch == 'i'|| ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u' || ch == 'U')
    {
        printf("\n Vowel ");
    }

    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("\n Consonant ");
    }
    else if (ch >='0' && ch <= '9')
    {
        printf("\n Digit ");
    }
    else
    {
        printf("\n Special Symbol ");
    }

    getch();
    return 0;
}
