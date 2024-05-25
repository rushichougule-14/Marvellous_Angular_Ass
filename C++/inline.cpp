#include<iostream>
using namespace std;

class Demo
{
    public:
    
    inline int Add(int iNo1,int iNo2)
    {
        return iNo1+iNo2;
    }

    int Sub(int iNo1,int iNo2);

};

int Demo:: Sub(int iNo1,int iNo2)
{
    return iNo1-iNo2;
}

int main()
{
    Demo obj;

    int iRet=0;
    iRet=obj.Add(10,11);
    iRet=obj.Sub(11,10);
}