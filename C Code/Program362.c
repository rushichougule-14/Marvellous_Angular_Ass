#include<stdio.h>


void Display(int Arr[], int iSize)
{
	static int iCnt = 0;

	if(iCnt < iSize)
	{
		printf("%d\n",Arr[iCnt]);
		iCnt++;

		Display(Arr , iSize);
	}

}

int main()
{
	int arr[5] = {10,20,30,40,50};
	Display(arr,5);
	return 0;
}