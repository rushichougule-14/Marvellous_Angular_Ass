#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iAdd = 0;
    iAdd = iValue1 + iValue2;
    return iAdd;
}

int main()
{
    int iNo1 = 0 , iNo2 = 0 , iRet = 0;
    cout<<"Enter the First:\n";
    cin>>iNo1;

    cout<<"Enter the Second Number \n";
    cin>>iNo2;

    iRet = Addition(iNo1,iNo2);
    cout<<"Addition is :"<<iRet<<"\n"; 
    
    
    return 0;
}