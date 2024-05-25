#include<stdio.h>

int CountSmall(char *str,char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
       if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;

}


int main()
{
    char Arr[10];
    int iRet = 0;
    char ch = '\0';

    printf("Please enter the string:\n");
    scanf("%[^'\n']s",Arr);

    //printf("Enter the Character which you want:\n");
    //scanf("%c",ch);

    iRet = CountSmall(Arr,'a');

    printf("Frequency of Captial letters :%d\n",iRet);
    
    return 0;
}