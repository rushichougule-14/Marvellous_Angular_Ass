#include<stdio.h>

void FactorsI(int no)
{
	int iCnt = 0;

	for(iCnt = 1 ; iCnt <= no/2 ; iCnt++)
	{
		if (no % iCnt == 0)
		{
			printf("%d\n",iCnt);
		}
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