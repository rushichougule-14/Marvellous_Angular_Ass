#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};


class Queue
{
	public:
	 	struct node * First;
		int iCount;

		Queue();

		bool IsQueueEmpty();
		void EnQueue(int no);
		int DeQueue();
		void Display();

};

Queue::Queue()
{
	First = NULL;
	iCount = 0;

}


bool Queue::IsQueueEmpty()
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

void Queue :: EnQueue(int no) //InsertLast
{
	struct node * newn = new node;
	newn->data = no;
	newn ->next = NULL;

	struct  node * temp = First;
	{
		
	};
	

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

int Queue::DeQueue() //DeleteFirst
{
	if (First == NULL)
	{
		cout<<"Unable to DeQueue element as Queue is empty"<<"\n";
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

void Queue::Display()
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
	Queue obj;
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
