#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud
{
            int RollNo;
            char Name[12];
            char City[8];
            float Per;
};

int main( )
{
            struct Stud std1, std2, std3 = {21, "Raj Kumar", "Karad", 95.24654};

            std1.RollNo = 65;
            strcpy(std1.Name,"Amey Wagh");
            strcpy(std1.City,"Pune");
            std1.Per = 75.956431;

            printf("\n Enter Roll No :");
            scanf("%d",&std2.RollNo);

            fflush(stdin);

            printf("\n Enter Name:");
            scanf(" %[^\n]",&std2.Name);

            fflush(stdin);

            printf("\n Enter City :");
            scanf(" %[^\n]",&std2.City);

            fflush(stdin);

            printf("\n Enter Percentage :");
            scanf("%f",&std2.Per);

            printf("\n 1st Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);
            printf("\n 2nd Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);
            printf("\n 3rd Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std3.RollNo,std3.Name,std3.City,std3.Per);

            getch();
            return 0;
}
