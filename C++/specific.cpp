#include<iostream>
using namespace std;

int iMax(int x,int y)
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

double iMax(double x,double y)
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
	int i = 10 , j = 20 , iret = 0;

	iret = iMax(i, j);
	cout<<"Maximum no is "<<iret<<"\n";

	double a = 3.10,b=6.10,dret = 0;

	dret = iMax( a, b);
	cout<<"Maximum no is "<<dret<<"\n";

	return 0;
}