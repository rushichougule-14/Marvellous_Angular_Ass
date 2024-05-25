#include<stdio.h>


int Display(int Arr[], int iSize)
{
	static int iCnt = 0;
	static int iSum = 0;

	if(iCnt < iSize)
	{
		iSum = iSum +Arr[iCnt];
		iCnt++;

		Display(Arr , iSize);
	}

	return iSum;

}

int main()
{
	int iRet = 0;

	int arr[5] = {10,20,30,40,50};
	iRet = Display(arr,5);

	printf("%d\n" ,iRet);
	return 0;
}