#include<stdio.h>

void Reverse(int iNo)
{
   int iCnt=0;

   printf("-------------------------------------\n");
   for(iCnt=iNo; iCnt>0 ; iCnt--)
   {
    printf("%d\t",iCnt);
   }

    printf("\n----------------------------------\n");
} 


int main ()
{
    int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    Reverse(iValue);
    
    return 0;

}