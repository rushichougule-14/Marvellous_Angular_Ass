#include<iostream>
using namespace std;

template<class T>  //template header
T Max(T x,T y)
{
	if(x>y)
	{
		return x;
	}

	else
	{
		return y;
	}
}
int main()
{
	int i = 10 , j = 10, iret = 0;
	double a = 3.26, b = 6.10, dret = 0.0;

	char c1 = 'G', c2 = 'Z' ,cret ;

	iret = Max(i,j);
	 cout<<"Max is : "<<iret<<"\n";

	dret = Max(a,b);
	 cout<<"Max is : "<<dret<<"\n";

	cret = Max(c1,c2);
	 cout<<"Max is : "<<cret<<"\n";
	

	return 0;
	
}

