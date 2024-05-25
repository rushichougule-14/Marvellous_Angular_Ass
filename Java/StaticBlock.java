class StaticBLock
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		//System.out.println(Demo.x);

		Demo obj1 = new Demo();
		Demo obj2 = new Demo();

		
	}
}

class Demo
{
	public int i ,j ;

	public static int x,y;

	public Demo()
	{
		System.out.println("Inside Constructor");
		i = 11;
		j = 21;
	} 

	static 
	{
		System.out.println("Inside StaticBLock");
		x = 11;
		y = 21;

	}
	
}