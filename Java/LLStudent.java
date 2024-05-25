import java.util.*;

class LLStudent
{
    public static void main(String []args)
    {
        LinkedList<Student>lobj = new LinkedList<Student>();

        //Stdudents sobj = new Students("Piyush",111,30);           
        //lobj.add(sobj);
        lobj.add(new Student("Amit",121,21)); //annoymous object()
        lobj.add(new Student("Sagar",221,25));
        lobj.add(new Student("Rushikesh",397,21));

        Student ref = null; //
        Iterator<Student>iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            ref = iobj.next();
            ref.Display(); 
        }


        iobj = null;
        lobj = null;
        ref = null;

    }  
}

class Student
{
    public String name;
    public int RID;
    public int Age;

    public Student(String n,int r,int a)
    {
        this.name = n;
        this.RID = r;
        this.Age = a;
    }

    public void Display()
    {
        System.out.println("Student Name: " + this.name + " RID: " + this.RID + " Age: " + this.Age);

    }


}

