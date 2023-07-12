#include<stdio.h>
#include<conio.h>

int main()
{
    int  Roll_No = 0;
    char Name [40] = "\0";
    char Course[20] ="\0";
    char City [20] ="\0";

    printf("\n===========================^^^^^^^^^^^^^^===========================");
    printf("\n Enter Student Information => \n");

    printf("\n Enter Roll No : ");
    scanf("%d",&Roll_No);

    fflush(stdin);
    printf("\n Enter Student  Name : ");
    scanf("[^\n]",&Name);

    fflush(stdin);
    printf("\n Enter  Course Name : ");
    scanf("[^\n]",&Course);

    fflush(stdin);
    printf("\n Enter Current City : ");
    scanf("[^\n]",&City);

    printf("\n===========================^^^^^^^^^^^^^^===========================");

    printf("\n Student Information Entered By You is = \n");

    printf("\n\t Roll No  =%d ",Roll_No);
    printf("\n\t Name     =%c ",Name);
    printf("\n\t Course   =%c ",Course);
    printf("\n\t City     =%c ",City);

    printf("\n===========================^^^^^^^^^^^^^^===========================");

    getch();
    return 0 ;
}




