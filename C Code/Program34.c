#include<stdio.h>
#include<stdbool.h>


int SumFactors(int iValue)
{
    int iCnt=0;

    int iSum=0;

    for(iCnt=1 ; iCnt<=(iValue/2); iCnt++)
    {
        if((iValue % iCnt )==0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}

bool CheckPerfect(int iData)
{
    int iAns=0;

    iAns=SumFactors(iData);
    
    if(iAns == iData)
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
    int iNo=0;
    bool bRet=false;

    printf("Enter the number: ");
    scanf("%d",&iNo);

    bRet=CheckPerfect(iNo);

    if (bRet== true)
    {
        printf("%d Perfect is number \n",iNo);
    }

    else
    {
        printf("%d is not perfect number \n,",iNo);
    }

   // printf("Factors of the Addition is: %d  ",iRet);







    return 0;

}