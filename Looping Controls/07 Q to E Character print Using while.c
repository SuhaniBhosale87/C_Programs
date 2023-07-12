#include<stdio.h>
#include<conio.h>

int main()
 {
    char ch = 'Q';

    printf("\n*******************************************");

    printf("\n E to Q Characters = ");

    printf("\n*******************************************");

    while(ch >= 'E')
    {
        printf(" \n %c",ch);
        ch--;
    }

    printf("\n*******************************************");

    printf("\n Thanks !!!");

    getch();
    return 0;
 }
