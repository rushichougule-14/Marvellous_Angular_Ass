#include<stdio.h>

int CountDigitsI(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		iCnt++;
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