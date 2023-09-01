#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
            int RollNo;
            char Name[12];
            char City[8];
            float Per;
};

int main( )
{
            struct  student std1, std2, std3;

            // Accept Details Of Student 01
            printf("\n Enter Roll No :");
            scanf("%d",&std1.RollNo);

            fflush(stdin);

            printf("\n Enter Name:");
            scanf("%[^\n]",&std1.Name);
            fflush(stdin);

            printf("\n Enter City :");
            scanf("%[^\n]",&std1.City);
            fflush(stdin);

            printf("\n Enter Percentage :");
            scanf("%f",&std1.Per);

            // Accept Details Of Student 02
            printf("\n Enter Roll No :");
            scanf("%d",&std2.RollNo);

            printf("\n Enter Name:");
            scanf(" %[^\n]",&std2.Name);
            fflush(stdin);

            printf("\n Enter City :");
            scanf(" %[^\n]",&std2.City);
            fflush(stdin);

            printf("\n Enter Percentage :");
            scanf("%f",&std2.Per);

            // Accept Details Of Student 03
            printf("\n Enter Roll No :");
            scanf("%d",&std3.RollNo);

            printf("\n Enter Name:");
            scanf(" %[^\n]",&std3.Name);
            fflush(stdin);

            printf("\n Enter City :");
            scanf(" %[^\n]",&std3.City);
            fflush(stdin);

            printf("\n Enter Percentage :");
            scanf("%f",&std3.Per);

            printf("\n 1st Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);
            printf("\n 2nd Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.4f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);
            printf("\n 3rd Student Details Given are => \n\n\t Roll No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.3f.\n",std3.RollNo,std3.Name,std3.City,std3.Per);

            getch();
            return 0;


}
