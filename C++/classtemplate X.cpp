#include<iostream>
using namespace std;


class Array
{
	public:
	int *Arr;
	int iSize;
	
	Array(int);
	~Array();

	void Accept();
	void Display();
};

Array::Array(int length)
{
	iSize = length;
	Arr = new int [iSize];
}

Array::~Array()
{
	delete []Arr;
}

void Array::Accept()
{
	cout<<"Enter the elements"<<"\n";
	for(int i = 0; i<iSize;i++)
	{
		cin>>Arr[i];
	}
}

void Array:: Display()
{
	cout<<"Elements are :"<<"\n";
	for(int i = 0; i<iSize;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}

int main()
{
	Array obj (5);
	obj.Accept();
	obj.Display();
	return 0;
}