#include<stdio.h>

void FactorsI(int no)
{
	static int iCnt = 1;

		if(iCnt <= (no/2))
		{

			if ((no % iCnt) == 0)
			{
				printf("%d\n",iCnt);
			}
			
			iCnt++;

			FactorsI(no);
		}
}


int main()
{
    int Value = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    FactorsI(Value);
    
    return 0;
}