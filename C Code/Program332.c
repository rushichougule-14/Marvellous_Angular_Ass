#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iAns = 0;
    iAns = No & iMask;

    return iAns;
   
}

int main()
{
   UINT Value = 0;
   UINT Ret = 0;

   printf("Enter the number:\n");
   scanf("%d",&Value);
   Ret = OffBit(Value);

  printf("%d",Ret);

   return 0;
}


    
