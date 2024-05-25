#include<iostream>
using namespace std;

template<class T>

void Swapi(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}


int main()
{
    int a = 11 , b = 10;

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    Swapi(a,b);

    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";


    double p = 11.9 , q = 10.7;

    cout<<"Value of p "<<p<<"\n";
    cout<<"Value of q "<<q<<"\n";

    Swapi(p,q);

    cout<<"Value of p "<<p<<"\n";
    cout<<"Value of q "<<q<<"\n";


    return 0;
}
