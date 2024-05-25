#include<iostream>
using namespace std;

class Demo
{
    public:
    int a;
    private:
    int b;
    protected:
    int c;

    public:

    Demo(int i,int j,int k)
    {
        cout<<"constructor\n";
        a=i;
        b=j;
        c=k;
    }
    void Fun()
    {
        cout<<"Value of a"<<this->a <<"\n";
        cout<<"Value of b "<<this->b <<"\n";
        cout<<"Value of c "<<this->c <<"\n";
    }
};

int main()
{
    cout<<"Inside main\n";
    Demo *p=NULL;
     p=new Demo(10,20,30);
    cout<<"Value of a:"<<p->a <<"\n";
    //cout<<"Value of b:"<<p->b <<"\n";
    //cout<<"Value of c :"<<p->c <<"\n";

    p->Fun();
    return 0;

    delete p;
}