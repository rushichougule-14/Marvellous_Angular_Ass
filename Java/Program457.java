import java.util.*;

class Program455
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();
        dobj .StartDBMS();
        dobj.Insert("Kartik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",95);
        dobj.Insert("Ram",63);

        dobj.DisplayAll();
        dobj.DisplaySpecific(3);

        dobj.DisplaySpecific("Rutuja");

        dobj.Delete(3);
        dobj.Delete("Ram");
        System.out.println("Final Data");
        
        dobj.DisplayAll();




        

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
        System.out.println("Roll No :"+RollNo+ " Name :"+Sname+ " Marks : "+Marks);
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

    public void Insert(String str,int No)
    {
        Student sobj = new Student(str,No);
        lobj.add(sobj);


    }

    public void DisplayAll()
    {
        for (Student sref:lobj)
        {
            sref.Display();
        } 
    }

    public void DisplaySpecific(int Value)
    {
        for(Student sref :lobj)
        {
            if(sref.RollNo == Value)
            {
                sref.Display();
                break;
            }
        }
    }


     public void DisplaySpecific(String str)
    {
        for(Student sref :lobj)
        {
            if(str.equals(sref.Sname))
            {
                sref.Display();
                break;
            }
        }
    }

    public void Delete(int no)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(sref.RollNo == no)
            {
                lobj.remove(index);
                break;
            }

            index++;
        }
    }

    public void Delete(string str)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                lobj.remove(index);
                break;
            }

            index++;
        }
    }
}