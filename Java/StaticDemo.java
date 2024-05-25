
class StaticDemo
{
	
	 public static void main(String args[])
	{
		System.out.println("Value of static j :"+Demo.j);
		Demo.gun();

		Demo obj = new Demo();

		obj.fun();
		obj.gun();

		System.out.println("Value of non static i :"+obj.i);
		System.out.println("Value of static j :"+obj.j);

		
	}
}

class Demo
{
	public int i = 10;
	public static int j = 20;

	public void fun()
	{
		System.out.println("Inside Non Static fun method");

		System.out.println(i);
		System.out.println(j);	
	}

	public static void gun()
	{
		System.out.println("Inside Static gun method");

		//System.out.println(i);  not allowed ....static to non static cant access...
		System.out.println(j);	
	}
}