class virtual
{
	public static void main(String arg[])
	
	{
		Base bp = new Derived();
		bp.fun();
		bp.gun();
		
	}
}

class Base
{
	public void fun()
	{
		System.out.println("Base Fun");
	}

	public void gun()
	{
		System.out.println("Base gun");

	}
	
}

class Derived extends Base
{
	public void fun()
	{
		System.out.println("Derived Fun");
	}

	public void sun()
	{
		System.out.println("Derived sun");

	}

	
}