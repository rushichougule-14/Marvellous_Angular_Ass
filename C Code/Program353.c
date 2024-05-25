#include<stdio.h>

int SumOfDigitsR(int iNo)
{
	static int iCnt = 0;
	static int iDigit = 0;
	static  int iSum =0;

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;

		iSum = iSum + iDigit;

		iCnt++;
		SumOfDigitsR(iNo);
	}

	return iSum ;
}

int main()
{
    int Value = 0, iRet = 0;;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = SumOfDigitsR(Value);

    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}