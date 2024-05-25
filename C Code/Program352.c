#include<stdio.h>

int CountDigitsI(int iNo)
{
	static int iCnt = 0;
	static int iDigit = 0;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		iCnt++;
		CountDigitsI(iNo);
	}

	return iCnt;
}

int main()
{
    int Value = 0, iRet = 0;;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = CountDigitsI(Value);

    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}