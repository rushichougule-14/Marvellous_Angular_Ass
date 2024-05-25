#include<stdio.h>


void DisplayR(int no)
{
   static int iCnt = 1;

  if (iCnt <= no)
  {
    printf("*\t");
    iCnt++;
    DisplayR(no); 

  }
}

int main()
{
  int iValue = 0;
  printf("Enter the number:\n");
  scanf("%d",&iValue);

  DisplayR (iValue);
  printf("\nEnd of main\n");

  return 0;
}