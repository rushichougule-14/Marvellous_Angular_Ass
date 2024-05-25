#include<iostream>
using namespace std;

class Poly
{
    public:

    Poly()
    {
        cout<<"Inside Constructor\n";
    }

    int Addition(int ino1,int ino2) //@2ii
    {
        return ino1+ino2;
    }

    int Addition(int ino1,int ino2,int ino3) //@3iii
    {
        return ino1+ino2+ino3;
    }

    int Addition(int ino1,int ino2,int ino3,int ino4)  //@4ii
    {
        return ino1+ino2+ino3+ino4;
    }

    ~ Poly()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    Poly obj1;
    int iRet=0;

    iRet=obj1.Addition(10,20);
    cout<<"The Addition of two parameter is "<<iRet<<endl;

    iRet=obj1.Addition(10,20,30);
    cout<<"The Addition of three parameter is "<<iRet<<endl;

    iRet=obj1.Addition(10,20,30,40);
    cout<<"The Addition of four parameter is "<<iRet<<endl;


    

    return 0;


}