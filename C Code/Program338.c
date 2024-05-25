#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No,UINT pos)
{
    UINT iMask = 0X00000001;

    iMask = iMask<<(pos-1);

    iMask = ~iMask;

    UINT iAns = 0;
    iAns = No & iMask;

    return iAns;
   
}

int main()
{
   UINT Value = 0;
   UINT Pos1 = 0;
   UINT ret = 0;

   printf("Enter the number:\n");
   scanf("%d",&Value);

   printf("Enter the Position:\n");
   scanf("%d",&Pos1);

    ret = OffBit(Value,Pos1);

  printf("Updated no is :%d",ret);

   return 0;
}


    
