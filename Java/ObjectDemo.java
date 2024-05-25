class ObjectDemo
{
    public static void main(String []args) throws Exception
    {
        Demo obj1 = new Demo("Rahul","PPA");
        Demo obj2 = new Demo("Amit","Python");

        System.out.println("HashCode of obj1 :"+obj1.hashCode());
        System.out.println("HashCode of obj2 :"+obj2.hashCode());

        System.out.println(obj1.toString());

        Class cobj = obj1.getClass();
        System.out.println("Name of the class :"+cobj.getName());

        Demo objX = (Demo)obj1.clone();

        System.out.println(objX.toString());
        String s1 = "Rushi";
		String s2 = "Rushi";

        if(s1.equals(s2))
		{
			System.out.println("Equla");
		}

		else
		{
			System.out.println("Not equal");
		}


        obj1=null;
        obj2=null;

        System.gc();

    }
}

class Demo implements Cloneable
{
    public String Name;
    public String Batch;

    public Demo(String x, String y)
    {
        this.Name = x;
        this.Batch = y;
    }

    public String toString()
    {
        return this.Name+" "+this.Batch;
    }

    protected void finalize()
    {
        System.out.println("Inside Finalize method");
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    } 
}

