class FinalMethod
{
	public static void main(String arg[])
	{
		Base bobj = new Derived();
		bobj.Fun();
	}
}

class Base
{
	public void Fun()
	{
		System.out.println("Base Fun");
	}

	public final void gun()
	{
		System.out.println("Base gun");

	}

}

class Derived extends Base
{
	public void Fun()
	{
		System.out.println("Derived Fun");
	}

	/*public void gun()
	{
		System.out.println("Derived gun");

	}*/
	
}