#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};


class Stack
{
	public:
	 	struct node * First;
		int iCount;

		Stack();

		bool IsStackEmpty();
		void Push(int no);
		int Pop();
		void Display();

};

Stack::Stack()
{
	First = NULL;
	iCount = 0;

}


bool Stack::IsStackEmpty()
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

void Stack :: Push(int no) //InsertFirst
{
	struct node * newn = new node;
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

int Stack::Pop() //DeleteFirst
{
	if (First == NULL)
	{
		cout<<"Unable to pop element as stack is empty"<<"\n";
		return -1;
	}

	else
	{
		int iValue = First->data; // adhi data kad mg memory ghalav...
		struct node * temp = First;

		First = First->next;

		delete temp;
		iCount--;

		return iValue;

	}




}

void Stack::Display()
{
	if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node *temp = First;
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
	Stack obj;
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
ani InserLast and DleteLast sathi time complexity n so we have to travel n times.*/

//use InsertFirst and Deletefirst... 0 time complixity.
