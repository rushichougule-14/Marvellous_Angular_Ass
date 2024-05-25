#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;
    while(*str  != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}



int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Plz Enter string:\n");
    scanf("%[^'\n]s",Arr);

    iRet = CountSpace(Arr);

    printf("Name of White Spaces  :%d\n",iRet);


    return 0;
}