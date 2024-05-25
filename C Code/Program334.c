#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No , UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    if((Pos < 1 )||(Pos > 32))
    {
        printf("Invalid Position\n");
        return false;
    }

    iMask = iMask << (Pos - 1);

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }

    else
    {
        return false;
    }

}
int main()
{
   UINT Value = 0;
   UINT Position = 0;

   bool bRet = false;

   printf("Enter the number:\n");
   scanf("%d",&Value);

   //printf("Size of Value is:%d",sizeof(Value));
   
   printf("Enter the Position:\n");
   scanf("%d",&Position);

   bRet = CheckBit(Value,Position);

   if(bRet == true)
   {
      printf("Bit at position %d is ON\n",Position);

   }

   else
   {

      printf("Bit at position %d is OFF\n",Position);
       
   }
   
   return 0;
}