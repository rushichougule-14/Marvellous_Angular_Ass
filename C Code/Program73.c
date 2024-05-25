#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int iCnt =0,iEvenCnt =0;
    for (iCnt =0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            iEvenCnt++;
        }
    }

    return iEvenCnt++;


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

    iRet=CountEven(ptr,ilength);

    printf("Number of Even elements are :%d \n",iRet);

    free(ptr);


    return 0;

}