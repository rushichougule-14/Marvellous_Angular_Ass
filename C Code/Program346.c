#include<stdio.h>


int FactR(int no)
{
	static int iMult = 1;
	static int iCnt  = 1;

	if(iCnt <= no)
	{
		iMult = iMult * iCnt;
		iCnt++;
		AdditionR(no);
	}
	
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactR(iValue);
    printf("Summation is : %d ",iRet);

    return 0;


}