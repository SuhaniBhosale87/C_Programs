#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[20] = "Unknown";
    char FNm[20]  = "Jack Fruit";

    printf("\n Name String Value = %s. ",Name);
    printf("\n FNm String Value = %s.",FNm);

    strcpy(Name,"Harry");
    printf("\n New Name String Value = %s.",Name);

    getch();

    strcpy(Name,FNm);
    printf("\n Updated Name String Value = %s.",Name);

    getch();
    return 0;
}
