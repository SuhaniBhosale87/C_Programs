#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';

        printf("\n Enter a Character = ");
        ch = getche();

        if((ch == 'A') || (ch == 'a'))
        {
            printf("\n WELCOME !!!");
        }

        else if((ch == 'B') || (ch == 'b'))
        {
            printf("\n Good Bye !!!");
        }

        else if((ch == 'C') || (ch == 'c'))
        {
            printf("\n Have a Good Day");
        }

        else if((ch == 'D') || (ch == 'd'))
        {
            printf("\n Thank You !!!");
        }
        else
        {
            printf("\n Invalid");
        }

        getch();
        return 0;
}
