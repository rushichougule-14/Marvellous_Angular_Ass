#include<stdio.h>
/*
Function Name : DivisibleByFive
Description  : TO check wh
*/
int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iAns % 5 ;

    if (iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);
    if (iRet == 0)
    {
        printf(" %d Number is not divisible by 5\n",iValue);
    }

    else
    {
        printf("%d Number is  divisble by 5\n ",iValue);
    }

    return 0;
    


}