#include<iostream>
using namespace std;


template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class Queue
{
	public:
	 	struct node <T>* First;
		int iCount;

		Queue();

		bool IsQueueEmpty();
		void EnQueue(T no);
		T DeQueue();
		void Display();

};

template<class T>
Queue<T>::Queue()
{
	First = NULL;
	iCount = 0;

}

template<class T>
bool Queue<T>::IsQueueEmpty()
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

template<class T>

void Queue <T>:: EnQueue(T no) //InsertLast
{
	struct node<T> * newn = new node<T>;
	newn->data = no;
	newn ->next = NULL;

	struct  node<T> * temp = First;

	if (First == NULL)
	{
		First = newn;
	}

	else
	{
		while(temp ->next != NULL)
		{
			temp= temp->next;
		}

		temp->next = newn;
	}

	iCount++;

	cout<<"Gets Pushed in Queue successfully"<<"\n";
}

template<class T>

T Queue<T>::DeQueue() //DeleteFirst
{
	if (First == NULL)
	{
		cout<<"Unable to DeQueue element as Queue is empty"<<"\n";
		return (T) -1;
	}

	else
	{
		T iValue = First->data; // adhi data kad mg memory ghalav...
		struct node<T> * temp = First;

		First = First->next;

		delete temp;
		iCount--;

		return iValue;

	}




}

template<class T>

void Queue<T>::Display()
{
	if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of stack are : "<<"\n";

        struct node<T> *temp = First;
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
	Queue<int> obj;
	obj.EnQueue(11);
	obj.EnQueue(21);
	obj.EnQueue(51);
	obj.EnQueue(101);


	obj.Display();

	int iRet = obj.DeQueue();
	cout<<"Poped element is : "<<iRet<<"\n";

	obj.Display();

	return 0;
}

/* Insert First and Delete First use kr bcoz techi time complexity 0 
ani InserLast and DleteLast sathi time complexity n so we have to travel n times.*/

//use InsertFirst and Deletefirst... 0 time complixity.
