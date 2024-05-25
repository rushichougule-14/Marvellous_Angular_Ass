#include<iostream>
using namespace std;

class Arithmetic 
{
    public:
        int iValue1 , iValue2;
    
        Arithmetic()
        {
            iValue1 = 0;
            iValue2 = 0;
        }

        Arithmetic(int A , int B)
        {
            this->iValue1 = A;
            this->iValue2 = B;
        }

        int Addition()
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};


int main()
{
    int iRet = 0;
    Arithmetic obj1;
    Arithmetic obj2(10,11);
    Arithmetic obj3(20,21);

    iRet = obj1.Addition();
    printf("Addtion is :%d\n",iRet);

    iRet = obj2.Addition();
    printf("Addtion is :%d\n",iRet);

    iRet = obj3.Addition();
    printf("Addtion is :%d\n",iRet);



    
    return 0;
}