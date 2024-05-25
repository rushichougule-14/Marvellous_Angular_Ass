#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iAns=0;
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt ) != 0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;


}

int main ()
{
    int iValue=0;
    int iRet=0;

    


    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    iRet=DisplayNonFactors(iValue);
    printf("Addition of Non Factors are  %d\n",iRet);



    
    
    return 0;

}