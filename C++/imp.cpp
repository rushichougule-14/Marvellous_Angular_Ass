#include<iostream>
using namespace std;

class Array
{
    private:
    int *ptr;
    int size;

    public:
    Array(int no=5)
    {
        cout<<"Constructor\n";
        this->size=no;
        ptr=new int [size];
    }



    ~ Array()
    {
        cout<<"Destructor\n";
        delete [] ptr;
    }

    void Accept()
    {
        cout<<"Enter the elements\n";
        int icnt=0;

        for (icnt=0;icnt<size;icnt++)
        {
            cin>>ptr[icnt];   
        }
    }

    void Display()
    {
        cout<<"Elements are :\n";
        int icnt=0;

        for (icnt=0;icnt<size;icnt++)
        {
            cout<<ptr[icnt]<<"\n";
        }
    }
};

int main()
{
    cout<<"Inside Main\n";
    int ivalue=0;
    cout<<"Entered number the elements:\n";
    cin>>ivalue;

    Array *obj=NULL;
    obj=new Array(ivalue);
    obj->Accept();
    obj->Display();

    delete obj;
    return 0;
}