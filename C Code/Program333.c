#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
    UINT iMask = 0X00000008;
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
0000  0000  0000 0000 0000 0000 0111 0000
0X0000070