#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    int j;

    demo()
    {
        i=0;
        j=0;
        cout<<"Default\n";
    }

    demo (int x,int y)
    {
        this->i=x;
        this->j=y;

        cout<<"Parameterised\n";
    }

};

int main()
{
    demo obj1(10,11);
    const demo obj2(10,11);
    obj1.i++;
    obj2.j++;
}