#include<stdio.h>

void Dispaly(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++,ch++)
    {
        printf("%c \t" ,ch);
        
    }
}



int main()
{
    int iValue = 0;
    printf("Enter the Enter :\n");
    scanf("%d",&iValue);

    Dispaly(iValue);
    return 0;
}