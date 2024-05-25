class SuperDemo
{
	public static void main(String arg[])
	{
		Derived dobj = new Derived();
		dobj.gun();

	}
}

class Base
{
	public int x,y;

	public Base(int a,int b)
	{
		System.out.println("Base Constructor");
		this.x = a;
		this.y = b;
	}

	public void fun()
	{
		System.out.println("Inside Base Fun");
	}
}

class Derived extends Base
{
	public int a,b;

	public Derived()
	{
		super(11,12);
		System.out.println("Derieved Constructor");
	}

	public void gun()
	{
		System.out.println("Value of x :"+ super.x);
		super.fun();
	}
}