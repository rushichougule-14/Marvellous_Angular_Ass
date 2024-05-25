#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT iNo)
{
    int Digit = 0;
    int iCnt = 0;
    while(iNo != 0 )
    {
        Digit= iNo %2;
        if(Digit == 1)
        {
            iCnt++;
        }
        iNo=iNo/2;

    }
    return iCnt;

}
int main()
{
   UINT Value = 0;
   int Ret = 0;

   printf("Enter the number:\n");
   scanf("%d",&Value);

    Ret = CountOnBits(Value);
    printf("No of Bits are on :%d",Ret);

   return 0;
}