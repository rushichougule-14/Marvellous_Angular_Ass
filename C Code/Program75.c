#include<stdio.h>
#include<stdlib.h>

void CountEven(int Arr[],int iSize)
{
    int iCnt =0,iSum1=0,iSum2=0;
    for (iCnt =0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            iSum1=iSum1+Arr[iCnt];
        }

        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }

    }

    printf("Number of Even are :%d\n",iSum1);
    printf("Number of Odd Numbers are :%d\n",iSum2);
    
}

int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0, iRet =0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&ilength);

    ptr = (int*)malloc(ilength * sizeof(int));

    printf("Enter the elements :\n");

    for (i=0;i<ilength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    CountEven(ptr,ilength);

    free(ptr);


    return 0;

}