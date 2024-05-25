#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt =0; 
    int iFrequnecy =0;
    for (iCnt =0 ; iCnt < iSize;iCnt++)
    {
        if ((Arr[iCnt]) == iNo)
        {
            iFrequnecy++;
        } 

    }
    return iFrequnecy;
}

int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0, iRet =0,iValue=0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&ilength);

    ptr = (int*)malloc(ilength * sizeof(int));

    printf("Enter the elements :\n");

    for (i=0;i<ilength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find out the frequency:\n");
    scanf("%d",&iValue);


    iRet=CountFrequency(ptr,ilength,iValue);

    if (iRet == 0)
    {
        printf("NO such element in Array\n");

        return 0;
    }

    printf("Frequency of %d is %d ",iValue,iRet);

    free(ptr);


    return 0;

}