#include<iostream>
using namespace std;

int Addition(int i , int j)
{
    int iAns = 0;
    iAns = i + j;
    return iAns;
}
int main()
{
    int a = 11 , b = 10 , ret = 0;
    ret = Addition(11,10);
    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}