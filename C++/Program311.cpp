#include<iostream>
using namespace std;

template <class T>

T Display(T Arr[] ,int iSize)
{
    int iCnt ;
    T iSum;
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{  
    int data[] = {10,20,30,40};
    int iRet = 0;


    iRet = Display(data,4);
    cout<<"Addition is :"<<iRet<<"\n";

    
    return 0;
}
