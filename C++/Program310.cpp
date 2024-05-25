#include<iostream>
using namespace std;

template <class T>

void Display(T Arr[] ,int iSize)
{
    int iCnt ;
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{  
    int data[] = {10,20,30,40};

    Display(data,4);

    char arr[] = {'a','b','c','d','e'};
    Display(arr,5);

    return 0;
}
