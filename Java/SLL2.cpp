#include<iostream>
using namespace std;
#pragma pack(1)

struct node 
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node **PPNODE;

class SinglyLL 
{
	public:
		// CHARACTERSTICS 
		PNODE First;
		int iCount;  // jar iCount private kel tr , count navach function lihun tith icount return kr ...:)

		// BEHAVIOURS 
		SinglyLL();

		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no,int ipos);

		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int ipos);
	
		void Display();
		
};

SinglyLL::SinglyLL()
{
	First = NULL;
	iCount = 0;
}

void SinglyLL::InsertFirst(int no)
{
	PNODE newn = new NODE;


	newn ->data = no;
	newn ->next = NULL;

	if(First == NULL)
	{
		First = newn;
		iCount++;
	}

	else
	{
		newn->next = First;
		First= newn;
		iCount++;
	}


}

void SinglyLL::InsertLast(int no)
{
	PNODE newn = new NODE;

	newn->data = no;
	newn -> next = NULL;

	if(First == NULL)
	{
		First = newn;
		iCount++;
	}

	else
	{
		PNODE temp = First;

		while(temp-> next != NULL)
		{
			temp = temp->next;
		}

		temp ->next = newn;
		iCount++;

	}

}

void SinglyLL::InsertAtPos(int no,int ipos)
{

	PNODE newn = new NODE;

	newn->data = no;
	newn -> next = NULL;

	PNODE temp = First;

	if ((ipos < 1) ||(ipos >iCount + 1))
	{
		cout<<"Invalid Postion\n";
		return;
	}

	else if(ipos == 1)
	{
		InsertFirst( no);
	}

	else if(ipos == iCount +1)
	{
		InsertLast( no);
	}
	else
	{
		int iCnt = 0;

		for(iCnt = 1 ; iCnt < ipos - 1 ;iCnt++)
		{
			temp = temp ->next;
		}

		newn->next = temp->next;
		temp->next = newn;
		iCount++;
	}




}


void SinglyLL::DeleteFirst()
{
	if(First == NULL)
	{
		return;
	}

	else if(First->next == NULL)
	{
		delete First;
		First = NULL;
		iCount--;
	}

	else
	{
		PNODE temp = First;
		First = First->next;

		delete temp;
		iCount--;

	}
}

void SinglyLL::DeleteLast()
{
	if(First == NULL)
	{
		return;
	}

	else if(First->next == NULL)
	{
		delete First;
		First = NULL;
		iCount--;
	}

	else
	{
		PNODE temp = First;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}

		delete temp->next;
		temp->next = NULL;
		iCount--;
	}

}

void SinglyLL::DeleteAtPos(int ipos)
{
	if((ipos < 1)||(ipos > iCount))
	{
		return;
	}

	if(ipos ==1)
	{
		DeleteFirst();
	}

	else if(ipos == iCount + 1)
	{
		DeleteLast();
	}

	else
	{
		PNODE temp1 = First;
		PNODE temp2 = NULL;

		int iCnt = 0;

		for(iCnt = 1 ; iCnt < ipos -1;iCnt++)
		{
			temp1 = temp1 ->next;
		}

		temp2 = temp1 ->next;
		temp1 ->next = temp1->next->next;
		delete temp2;

		iCount--;
	}

}

void SinglyLL::Display()
{
	cout<<"Elements of Linked List :"<<"\n";
	PNODE temp = First;

	while(temp != NULL)
	{
		cout<<"| " << temp->data  <<" |-> ";
		temp = temp ->next;
	}

	cout<<"NULL\n";


}


int main()
{
	SinglyLL obj1;

	cout<<"Size of :"<<sizeof(obj1)<<"\n";
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";

	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);

	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";


	obj1.InsertLast(101);
	obj1.InsertLast(111);
	obj1.InsertLast(121);


	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";



	obj1.InsertAtPos(41,3);
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";



	obj1.DeleteAtPos(3);
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";


	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";
	
cout<<"-------------------------------------------------------------\n";

cout<<"Linked List of Second Obj2"<<"\n";

	SinglyLL obj2;


	obj2.InsertFirst(30);
	obj2.InsertFirst(20);
	obj2.InsertFirst(10);

	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";


	obj2.InsertLast(100);
	obj2.InsertLast(110);
	obj2.InsertLast(120);


	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";



	obj2.InsertAtPos(40,3);
	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";



	obj2.DeleteAtPos(3);
	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";
	obj2.DeleteFirst();
	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";


	obj2.DeleteLast();
	obj2.Display();
	cout<<"Number of Nodes are :"<<obj2.iCount<<"\n";





	return 0;
}