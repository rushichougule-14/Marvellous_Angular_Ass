#include<stdio.h>


int AdditionI(int no)
{
	static int iSum = 0;
	static int iCnt  = 0;

	if(iCnt <= no)
	{
		iSum = iSum + iCnt;
		iCnt++;
		AdditionI(no);
	}
	
	return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = AdditionI(iValue);
    printf("Summation is : %d ",iRet);

    return 0;


}