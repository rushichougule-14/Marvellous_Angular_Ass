#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurence(int Arr[],int iSize,int iNo)
{
    int iCnt =0; 
    int iFrequnecy =0;
    for (iCnt =0 ; iCnt < iSize;iCnt++)
    {
        if ((Arr[iCnt]) == iNo)
        {
            break;
        }
    }

    if (iCnt == iSize)
    {
        return -1;
    }

    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int ilength = 0, i = 0, iValue=0,iRet =0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&ilength);

    ptr = (int*)malloc(ilength * sizeof(int));

    printf("Enter the elements :\n");

    for (i=0;i<ilength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to find occurence:\n");
    scanf("%d",&iValue);


    iRet=CheckOccurence(ptr,ilength,iValue);

    if (iRet == -1)
    {
        printf("NO such element in Array\n");
    }

    else
    {
        printf("%d is occured in the array ",iValue);
    }
    free(ptr);


    return 0;

}