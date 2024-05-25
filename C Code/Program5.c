#include<stdio.h>

int Multiplication(int ivalue1,int ivalue2)
{
    int ians=0;
    ians=ivalue1*ivalue2;
    return ians;
}


int main()
{
    int ino1=0;
    int ino2=0;

    int iret=0;
    printf("Enter the first no:\n");
    scanf("%d",&ino1);

    printf("Enter the second no:\n");
    scanf("%d",&ino2);
    
    iret=Multiplication(ino1,ino2);
    printf("Multiplication of two no is: %d",iret);



    return 0;
}