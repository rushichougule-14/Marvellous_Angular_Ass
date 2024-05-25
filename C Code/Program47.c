//I/P: 751
//O/P;\: 3


#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit =0,iSum=0;

    if (iNo < 0)
    {
        iNo =-iNo;
    }
    
    while (iNo !=0)
    {
        iDigit=iDigit % 10;
        iNo =iNo /10;

        iSum=iSum+iDigit;
    }

    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;

}