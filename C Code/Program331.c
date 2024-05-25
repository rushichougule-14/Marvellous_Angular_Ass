#include<stdio.h>
#include<stdbool.h>




typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask =  0X00000800;
    UINT Result =0;

    Result= No & iMask;

    if(Result==iMask)
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
   bool Ret = false;

   printf("Enter the number:\n");
   scanf("%d",&Value);
   Ret = CheckBit(Value);

   if(Ret==true)
   {
        printf("12Th bit is on\n");
   }

   else
   {
        printf("12Th bit is off\n");

   }

   return 0;
}