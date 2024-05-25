#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt=0;

    for (iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if ((iNo % iCnt) ==0) && ((iNo % 2 )==0)
        {
            printf("%")
        }
    }
}

int main ()
{
    int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    Reverse(iValue);
    
    return 0;

}