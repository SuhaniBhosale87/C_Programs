#include<stdio.h>
#include<conio.h>

int Vowels_Count(char VStr[])
{
    int i = 0, Vow_Cnt = 0;


    while(VStr[i] != '\0')
    {
        if(VStr[i] == 'a' ||VStr[i] == 'e'||VStr[i] == 'i'||VStr[i] == 'o'||VStr[i] == 'u'||VStr[i] == 'A'||VStr[i] == 'E'||VStr[i] == 'I'||VStr[i] == 'O'||VStr[i] == 'U')
        {
            Vow_Cnt++;
        }
        i++;
    }

    return Vow_Cnt;

}

int main()
{
    char cSrc[20] = {'\0'};
    int V_Cnt = 0;


    printf("\n Enter a String : ");
    gets(cSrc);

     V_Cnt = Vowels_Count(cSrc);

    printf("\n Count of Vowels in Given String is = %d ",V_Cnt);

    return 0;

}
