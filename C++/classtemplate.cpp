#include<iostream>
using namespace std;

template<class T>
class Array
{
	public:
	T *Arr;
	int iSize;
	
	Array(int);
	~Array();

	void Accept();
	void Display();
	T Max();
};

template<class T>
Array <T>::Array(int length)
{
	iSize = length;
	Arr = new T [iSize];
}

template<class T>
T Array<T>::Max()
{
	T iMax = Arr[0];
	int i = 0;

	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax = Arr[i];
		}
	}

	return iMax;
}

template<class T>
Array<T>::~Array()
{
	delete []Arr;
}

template<class T>
void Array<T>::Accept()
{
	cout<<"Enter the elements"<<"\n";
	for(int i = 0; i<iSize;i++)
	{
		cin>>Arr[i];
	}
}

template<class T>
void Array<T>:: Display()
{
	cout<<"Elements are :"<<"\n";
	for(int i = 0; i<iSize;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}

int main()
{
	Array<int>obj (5);
	obj.Accept();
	obj.Display();

	int iret = obj.Max();
	cout<<"Maximum is "<<iret<<"\n";


	Array<char>obj2(6);
	obj2.Accept();
	obj2.Display();

	//iret = obj2.Max();
	//cout<<"Maximum is "<<iret<<"\n";


	return 0;
}
