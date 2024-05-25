#include<stdio.h>

int  SumFactorsR(int no)
{
	static int iCnt = 1;
	static int iSum = 0;

		if(iCnt <= (no/2))
		{

			if ((no % iCnt) == 0)
			{
				iSum = iSum + iCnt;
			}
			
			iCnt++;

			SumFactorsR(no);
		}

		return iSum;
}


int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

   iRet =  SumFactorsR(Value);
   printf("Summation is  : %d",iRet);
    
    return 0;
}