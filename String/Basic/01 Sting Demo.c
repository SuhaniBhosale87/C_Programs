#include<stdio.h>
#include<conio.h>

int main()
{
    char cArr[20] = {'K','A','R','A','D'};        /// char cArr [20] = "KARAD";

    puts(cArr);

    puts("\n Enter a String : ");                /// printf("\n  Enter a String :" );
    gets(cArr);                                 /// scanf("%[^\n]",cArr);


    puts("\n Given String is => ");            /// printf("\n Given String is => %s",cArr);
    puts(cArr);

    getch();
    return 0;
}
