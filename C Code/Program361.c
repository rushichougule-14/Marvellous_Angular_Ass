#include<stdio.h>


void Display(int Arr[], int iSize)
{
	int iCnt = 0;

	for(iCnt = 0 ; iCnt < iSize ;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}

}

int main()
{
	int arr[5] = {10,20,30,40,50};
	Display(arr,5);
	return 0;
}