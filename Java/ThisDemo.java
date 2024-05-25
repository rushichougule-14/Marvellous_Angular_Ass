class ThisDemo
{
	public static void main(String arg[])
	{
		Demo obj = new Demo(10,20);
		obj.gun();

	}
}

class Demo
{
	public int x,y;

	public Demo()
	{
		//this(10,20);
		System.out.println("Default Constructor");
	}

	public Demo(int a , int b)
	{
		this();
		System.out.println("Paremeterised Constructor");
		this.x = a;
		this.y = b;
	}
	;;
	public void fun()
	{
		System.out.println("Inside Fun");
		System.out.println("Value of x :"+this.x);
	}

	public void gun()
	{
		System.out.println("Inside Gun");
		this.fun();
	}

}