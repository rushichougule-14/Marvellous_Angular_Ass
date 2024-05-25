#include<stdio.h>

void Dispaly(int iRow,int iCol)
{
    int i =0,j=0;

    if (iRow < 0)
    {
        Row = -iRow;
    }

    if (iCol < 0)
    {
        iCol = -iCol;
    }
    

    for (i=1;i<=iRow;i++)
    {
        for (j=1;j<=iCol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

}



int main()
{
    int iValue1 = 0 ,iValue2 =0;
    printf("Enter the rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the column :\n");
    scanf("%d",&iValue2);

    Dispaly(iValue1,iValue2);
    return 0;
}