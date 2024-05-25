#include<stdio.h>

void DisplayFactors(int iValue)
{
    int iCnt=0;
    printf("Factors are :\n");

    for(iCnt=1 ; iCnt<iValue; iCnt++)
    {
        if((iValue % iCnt )==0)
        {
            printf("%d\n",iCnt);
        }
    }


}

int main()
{
    int iNo=0;

    printf("Enter the number: ");
    scanf("%d",&iNo);

    DisplayFactors(iNo);





    return 0;

}