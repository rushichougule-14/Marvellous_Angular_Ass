#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void Fuction()
        {
            cout<<"Value of iNo is "<<iNo<<"\n";
        }
};
int main()
{
    int iValue = 0;
    cout<<"Enter the number:\n";

    cin>>iValue;

    Numbers obj (iValue);
    obj.Fuction();
    return 0;
}