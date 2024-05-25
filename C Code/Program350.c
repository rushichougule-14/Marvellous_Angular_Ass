#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int no)
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

			CheckPerfectR(no);

			if(iSum == no)
			{
				return true;
			}

			else
			{
				return false;
			}
		}
}


int main()
{
    int Value = 0; bool bRet = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

   bRet =  CheckPerfectR(Value);
   
   if(bRet == true)
   {
   	printf("%d is perfect number",Value);
   }

   else
   {
   	printf("%d is not perfect number",Value );
   }
    
    return 0;
}