#include<iostream>
using namespace std;

template <class T>

T Maximum (T Arr[] ,int iSize)
{
    int iCnt ;
    T Max;

    Max = Arr[0];
    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        if (Arr[iCnt]> Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{  
    int data[] = {120,420,310,640};
    int iRet = 0;


    iRet = Maximum(data,4);
    cout<<"Maximum is :"<<iRet<<"\n";

    
    return 0;
}
