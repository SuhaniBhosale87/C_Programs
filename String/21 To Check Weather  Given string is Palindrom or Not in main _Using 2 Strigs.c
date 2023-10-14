#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
     char cDest[20];
     int i = 0,j = 0;


    printf("\n Enter a String : ");
    gets(cSrc);

    for(;cSrc[i] != '\0';i++);
    for(i = i - 1;i >= j; i--,j++)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }
    }

    if(i < j)
    {
        printf("\n\n Given String is Palindrome!!!");
    }

    else
    {
         printf("\n\n Given String is NOT Palindrome!!!");
    }

    getch();
    return 0;
}
