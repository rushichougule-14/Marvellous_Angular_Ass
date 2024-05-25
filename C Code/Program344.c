#include<stdio.h>


int AdditionI(int no)
{
	int iSum = 0;
	int iCnt  = 0;

	while(iCnt <= no)
	{
		iSum = iSum + iCnt;
		iCnt++;
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