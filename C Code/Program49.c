//I/P: 751
//O/P;\: 3


#include<stdio.h>

void DispalyEvenOddDigits(int iNo)
{
    int iDigit=0;
    int iEvenCnt=0;
    int iOddCnt=0;


    if (iNo == 0)
    {
        printf("Number of even digits are 1\n ");
        printf("Number of odd digits are 0\n" );
        return ;
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
        else
        {
            iOddCnt++;
        }
    }

        printf("Number of even digits are : %d\n" ,iEvenCnt);
        printf("Number of odd digits are : %d\n" ,iOddCnt);
}

int main()
{
    int iValue=0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

   DispalyEvenOddDigits(iValue);

    return 0;

}