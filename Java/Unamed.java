class Unamed
{
	 public static void main(String[] args)
	{
		Demo obj1 = new Demo();
		Demo obj2 = new Demo(51,101);
	}
}

class Demo
{
	public int i,j;
	public static int x,y;

	{
		System.out.println("Inside Unamed");
		this.i = 10;
		this.j= 20;
	}
	

	public Demo()
	{
		System.out.println("Inside Default Constructor");
	}

	public Demo(int a,int b)
	{
		System.out.println("Inside Parameterised Constructor");

	}

	static
	{
		System.out.println("Inside Static block");

		x = 11;
		y = 21;
	}
}

