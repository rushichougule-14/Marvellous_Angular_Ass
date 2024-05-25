#include<iostream>
using namepsace std;

    void fun(int x)
    {
        x++;
    }

    void gun(int *p)
    {
        (*p)++;
    }

    void sun(int &ref)
    {
        ref++;
    }
    
int main()
{
    int a = 10 ,b = 10 , c = 10;

    cout<<"Before call to fun "<<a<<"\n";
    fun(a);
    cout<<"After call to fun"<<a<<"\n";

    cout<<"Before call to gun "<<a<<"\n";
    gun(&b);
    cout<<"After call to gun"<<b<<"\n";

    cout<<"Before call to sun "<<a<<"\n";
    sun(c);
    cout<<"After call to sun"<<c<<"\n";

    return 0;





}