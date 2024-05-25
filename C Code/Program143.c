#include<stdio.h>
#include<stdbool.h>

bool CountSmall(char *str,char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
       if (*str == ch)
        {
            bFlag == 
            break;
        }

        str++;
    }

    return iCnt;

}


int main()
{
    char Arr[20];
    bool iRet = 0;
    char cValue = '\0';

    printf("Please enter the string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character which you want:\n");
    scanf(" %c",&cValue);

    iRet = CountSmall(Arr,cValue);

    if (iCnt == )
    {
        printf("%c is present in string \n");
    }

    else
    {
        printf("%c is present in string \n");
    }
  
   return 0;
}