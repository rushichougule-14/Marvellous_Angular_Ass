import java.util.*;

class Program455
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();
        dobj .StartDBMS();

    }
}

class Student
{
    public String Sname;
    public int Marks;
    public int RollNo;

    public static int Generator;

    static
    {
       Generator = 0;
    }


    public Student(String str, int no)
    {
        this.Sname = str;
        this.Marks = no;
        Generator++;

        this.RollNo = Generator;
    }

    void Display()
    {
        System.out.println("Roll No :"+RollNo+ "Name :"+Sname+ " Marks : "+Marks);
    }
}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList(); 
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous Customised DBMS Started Successfully...");

    }
}