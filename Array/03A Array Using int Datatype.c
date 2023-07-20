#include<stdio.h>

int main()
{
    int Values[5] = { };

    printf("\n Value Of 1st Element = <%C> .",Values[0]);
    printf("\n Value Of 2nd Element = {%C} .",Values[1]);
    printf("\n Value Of 3rd Element = [%C] .",Values[2]);
    printf("\n Value Of 4th Element = |%C| .",Values[3]);
    printf("\n Value Of 5th Element = *%C* .",Values[4]);

    getch();
    return 0;
}

