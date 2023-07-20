#include<stdio.h>

int main()
{
    char Arr[5] = {'F' , '%' , '6' ,'#','G'};

    printf("\n Value Of 1 Element = <%C> .",Arr[0]);
    printf("\n Value Of 2 Element = {%C} . ",Arr[1]);
    printf("\n Value Of 3 Element = [%C] .",Arr[2]);
    printf("\n Value Of 4 Element = |%C| .",Arr[3]);
    printf("\n Value Of 5 Element = *%C* .",Arr[4]);

    getch();
    return 0;
}

