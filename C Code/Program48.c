//I/P: 751
//O/P;\: 3


#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit=0;
    int iEvenCnt=0;


    if (iNo == 0)
    {
        return 1;
    }


    if (iNo < 0)
    {
        iNo=-iNo;
    }

    while(iNo > 0)
    {
        iDigit=iNo % 10;
        iNo= iNo / 10;

        if (iDigit % 2 ==0)
        {
            iEvenCnt++;
        }

        
    }

    return iEvenCnt;


}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);

    printf("Number of Even digits are : %d\n",iRet);

    return 0;

}