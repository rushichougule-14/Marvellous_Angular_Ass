#include<iostream>
using namespace std;


template <class T>

struct node
{
	T data;
	struct node *next;
};


template <class T>
class Stack
{
	public:
	 	struct node<T> * First;
		int iCount;

		Stack();

		bool IsStackEmpty();
		void Push(T no);
		T Pop();
		void Display();

};

template <class T>
Stack<T>::Stack()
{
	First = NULL;
	iCount = 0;

}

template <class T>
bool Stack<T>::IsStackEmpty()
{
	if (iCount == 0)
	{
		return true;
	}

	else
	{
		return false;
	}

}

template <class T>
void Stack<T> :: Push(T no) //InsertFirst
{
	struct node<T>  *newn = new node<T>;
	newn->data = no;
	newn ->next = NULL;
	

	if (First == NULL)
	{
		First = newn;
	}

	else
	{
		newn ->next = First;
		First = newn;
	}

	iCount++;

	cout<<"Gets Pushed in stack successfully"<<"\n";
}

template <class T>

T Stack <T>::Pop() //DeleteFirst
{
	if (First == NULL)
	{
		cout<<"Unable to pop element as stack is empty"<<"\n";
		return -1;
	}

	else
	{
		T iValue = First->data; // adhi data kad mg memory ghalav...
		struct node <T> * temp = First;

		First = First->next;

		delete temp;
		iCount--;

		return iValue;

	}




}

template <class T>

void Stack<T>::Display()
{
	if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node<T>  *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL"<<"\n";
    }

}


int main()
{
	Stack<int> obj;
	obj.Push(11);
	obj.Push(21);
	obj.Push(51);
	obj.Push(101);


	obj.Display();

	int iRet = obj.Pop();
	cout<<"Poped element is : "<<iRet<<"\n";

	obj.Display();





	return 0;
}

/* Insert First and Delete First use kr bcoz techi time complexity 0 
ani InserLast and DleteLast sathi time complexity n so we have to travel n times.


Template steps:
1)class template cpy krych .


*/

//use InsertFirst and Deletefirst... 0 time complixity.
