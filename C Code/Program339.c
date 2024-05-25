#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT start,UINT end)
{
  UINT iMask1 = 0 , iMask2 = 0, Mask = 0 , Result = 0;

  iMask1 = iMask1 <<(start-1);
  iMask2 = iMask2 >>(32 - end);

  Mask = iMask1 &iMask2;
  Result =  No ^ Mask;

  return Result;

}
int main()
{
  UINT Value = 0;
  printf("Enter the number:\n");
  scanf("%d",&Value);
  UINT i = 0 , j = 0 , ret = 0;

  printf("Enter the start range:\n");
  scanf("%d",&i);

    printf("Enter the end range:\n");
  scanf("%d",&j);

  ret = ToggleRange(Value,i,j);
  printf("Updated No is :%d\n",ret);

  return 0;

}

//i/p= 