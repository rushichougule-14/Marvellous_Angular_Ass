class AbstractDemo
{
	public static void main(String[] args) 
	{
		//Demo obj = new Demo();
		 //obj;
		Demo obj = new Hello(); //upcasting
		obj.fun();
		obj.gun();
		obj.sun();

		System.out.println(obj.i);
		System.out.println(obj.j);
	}
}

abstract class Demo
{
	public int i,j;
	public Demo()
	{
		System.out.println("Inside the Constructor of Demo");
		i = 10;
		j = 20;
	}

	public void fun()
	{
		System.out.println("Inside fun of Demo");
	}

	public void gun()
	{
		System.out.println("Inside gun of Demo");

	}

	public abstract void sun();
}

class Hello extends Demo
{
	public int x,y;
	public Hello()
	{
		System.out.println("Inside the Constructor of Hello");
		x= 11;
		y = 21;
	}

	public void fun()		// Overriding
	{
		System.out.println("Inside fun of Hello");	
	}

	public void sun()	// Definnation
	{
		System.out.println("Inisde sun of HEllo");
	}
}

