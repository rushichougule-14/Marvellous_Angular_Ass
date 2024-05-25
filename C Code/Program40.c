#include<stdio.h>

void Reverse(int iNo)
{
   int iCnt=0;

   printf("-------------------------------------\n");
   iCnt=iNo;
   while(iCnt>=1)
   {
    printf("%d\t",iCnt);
    iCnt--;
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