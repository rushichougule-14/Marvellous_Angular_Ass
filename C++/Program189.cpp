#include<iostream>
using namespace std;

class ArrayX
{
      public:
        int iSize;
        int * Arr;

        ArrayX(int i)
        {
            this->iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Please Enter the Number\n";
            int iCnt = 0;

            for(iCnt = 0 ;iCnt < iSize ;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

         void Display()
        {
            int iCnt = 0;
            cout<<"Elements of Array are :\n";

            for(iCnt = 0 ;iCnt < iSize ;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};


int main()
{
    int iLength = 0;
    cout<<"Enter the number of elements:\n";

    cin>>iLength;

    ArrayX obj1(iLength);
    obj1.Accept();

    obj1.Display();


  
    return 0;
}