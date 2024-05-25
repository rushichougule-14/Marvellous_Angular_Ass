#include<stdio.h>
#include<stdbool.h>
/*
Function Name : DivisibleByFive
Description  : TO check wh
*/
bool DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iAns % 5 ;

    if (iAns == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = DivisibleByFive(iValue);
    if (bRet == false)
    {
        printf(" %d Number is  divisible by 5\n",iValue);
    }

    else
    {
        printf("%d Number is not divisble by 5\n ",iValue);
    }



    return 0;
    


}