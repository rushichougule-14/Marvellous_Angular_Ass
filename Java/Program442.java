import java.util.*;

class Program441
{
    public static void main(String arg[])
    {
        SingyLL obj = new SingyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        obj.InsertLast(71);
        obj.InsertLast(81);
        obj.InsertLast(101);

        obj.Display();

        obj.InsertAtPos(61,4);
         obj.Display();







    }
}

class Node
{
    public int data;
    public Node Next;

    public Node(int no)
    {
        this.data = no;
        this.Next = null;
    }
    
}

class SingyLL
{
    public Node Head;  // reference & composition 9 obj creates)
    public int Count;

    public SingyLL()
    {
        Head = null;
        Count = 0;
    }

    protected void finalize()
    {
        // Memory Free...

    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(this.Head == null)
        {
            this.Head = newn;

        }

        else 
        {
            newn.Next = this.Head;
            this.Head = newn;
        }

        this.Count++;
    }

    public void Display()
    {
        Node temp = Head;

        while(temp != null)
        {
            System.out.print("| "+temp.data+" |->");
            temp = temp.Next;
        }
        System.out.println("NULL");
    }

    public void InsertLast(int no)
    {
        Node newn = new Node(no);
        Node temp = Head;

        
        if(this.Head == null)
        {
            this.Head = newn;

        }

        else
        {
            while(temp.Next != null)
            {
                temp = temp.Next;
            }

            temp.Next = newn;
            Count++;

        }




    }

    public void InsertAtPos(int no,int iPos)
    {
        Node newn = new Node(no);
         Node temp = Head;

        if((iPos < 1 ) || (iPos > Count+1 ))
        {
            return;
        }

        if (iPos == 1)
        {
            InsertFirst(no);
        }

        else if(iPos == Count+1)
        {
            InsertLast(no);
        }

        else
        {
            int i = 0;

            for(i=1 ; i<iPos -1 ;i++)
            {
                temp = temp.Next;
            }

            newn.Next = temp.Next;
            temp.Next = newn;

            Count++;
        }
    }


}