#include<iostream>
using namespace std;

class Demo
{
    public:
    int ino1;

    int ino2;

    Demo()
    {
        cout<<"Inside Constructor\n";
    }

    ~ Demo()
    {
        cout<<"Inside Destructor\n";
    }

    void Display(int x)
    {
        cout<<"Inside Fun\n";
    }
};

int main()
{
   // Demo obj; //static memory
    Demo *p =NULL;
   // p=(Demo*)malloc(sizeof(Demo));
    //free(p);

    p=new Demo;
    delete p;
    return 0;
}