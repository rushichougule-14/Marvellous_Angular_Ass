#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X0F0F0F0F;
    UINT iAns = 0;
    iAns = No ^ iMask;

    return iAns;
   
}

int main()
{
   UINT Value = 0;
   UINT Ret = 0;

   printf("Enter the number:\n");
   scanf("%d",&Value);
   Ret = ToggleBit(Value);

  printf("%d",Ret);

   return 0;
}
