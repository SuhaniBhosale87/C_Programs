#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, iNum = 55;
    int *iptr1 = &iNo;
    int *iptr2 = &iNum;

    printf("\n value of iNo = %d",iNo);
    printf("\n Address of iNo = %d",iNo);
    printf("\n value of iNo using its pointer iptr1%d= %d",iptr1);
    printf("\n Address of iNo using iptr1 = %d",iNo);
    printf("\n Address of iptr1= %d",&iptr1);

    printf("\n value of iNum = %d",iNum);
    printf("\n Address of iNum = %d",iNum);
    printf("\n value of iNum using its pointer iptr2%d= %d",iptr2);
    printf("\n Address of iNum using iptr2 = %d",iNum);
    printf("\n Address of iptr2 = %d",&iptr2);

    printf("\n\n Value = %d",&(*iptr1));
    printf("\n\n Value = %d",&(*iptr2));




    getch();
    return 0;
}
