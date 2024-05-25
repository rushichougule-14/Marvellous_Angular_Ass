#include<stdio.h>

int DisplayFactors(int iValue)
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

int main()
{
    int iNo=0;

    int iRet=0;

    printf("Enter the number: ");
    scanf("%d",&iNo);

    iRet=DisplayFactors(iNo);
    printf("Factors of the Addition is: %d  ",iRet);







    return 0;

}