#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt=0;
    int iTab=0;
    
    

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        iTab=iNo*iCnt;
        printf("%d * %d =%d \n",iNo,iCnt,iTab);
    }

    
}


int main ()
{
    int iValue=0;
    int iRet=0;

    


    printf("Enter the number :");
    scanf("%d",&iValue);
    
    DisplayTable(iValue);
    //printf("Addition of Non Factors are  %d\n",iRet);



    
    
    return 0;

}