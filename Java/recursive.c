#include<stdio.h>

int Factorial(int iValue)
{
	static int iCnt = 1;
	static int iFact = 1;

	 if (iCnt <=iValue)
	 {
	 
		iFact = iCnt*iFact;
		
		Factorial(iValue);
		iCnt++;
	 }

	 return iFact;
	
}


int main()
{
	int iNo = 0 ,iRet = 0;
	printf("Enter the no:");
	scanf("%d",&iNo);

	iRet = Factorial(iNo);
	printf("Factorial of %d is %d\n",iNo,iRet);
	return 0;
}