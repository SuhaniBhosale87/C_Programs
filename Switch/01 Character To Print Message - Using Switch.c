#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n\n\n********************************************************");


    printf("\n Enter a Character to Print Message = ");
    scanf("%c",&ch);

    switch (ch)
    {

    case 'A':
    case 'a':
            printf("\n Welcome.");
            break;

    case 'B':
    case 'b':
            printf("\n Thanks.");
            break;

    case 'C':
    case 'c':
            printf("\n Good Bye.");
            break;

    case 'D':
    case 'd':
            printf("\n Have Nice Day.");
            break;

    default:

        printf("\n Invalid Input!!!");
    }
    printf("\n\n\n**********************************************************");
    getch();
    return 0;
}
