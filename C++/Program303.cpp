#include<iostream>
using namespace std;

template<class T>

T Addition(T i , T j)
{
    T iAns;
    iAns = i + j;
    return iAns;
}
int main()
{
    double a = 11.9 , b = 10.1 , ret = 0.0;
    ret = Addition(a,b);
    cout<<"Addition is : "<<ret<<"\n";

    double x = 10, y = 11 , iret = 0.0;
    iret = Addition(x,y);
    cout<<"Addition is : "<<iret<<"\n";

    return 0;
}